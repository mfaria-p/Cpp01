# include "Replace.hpp"

int    replace( char *av, std::string s1, std::string s2 )
{

    std::size_t index;
    std::string buf;
    char tinyBuf;
    //std::ifstream is a class from the C++ Standard Library used for reading from files. It stands for "input file stream."
    // is used to read data from a file, treating the file as a sequence of characters (a stream).
    //The ``std::ifstream`` constructor is called with av as an argument. This attempts to open the file specified by av.
    //If the file is successfully opened, the ``file`` object can be used to read from the file.
    std::ifstream file( av );
    //If the file cannot be opened, the ``file.is_open()`` check will fail, and an error message will be printed.
    if ( !file.is_open() )
    {
        std::cerr << "Error: could not open the file" << std::endl;
        return (1);
    }
    //std::ofstream is a class from the C++ Standard Library used for writing to files. It stands for "output file stream."
    // The std::string(av) can "sum" the string with ".replace" and the c_str() function converts the string to a C string.
    std::ofstream newFile( (std::string(av) + ".replace").c_str() );
    if ( !newFile.is_open() )
    {
        std::cerr << "Error: could not create the file" << std::endl;
        return ( 1 );
    }
    //The ``file.good()`` function checks if the file is in a good state. If the file is in a good state, the loop will continue.
    //The ``file.get()`` function reads a character from the file and returns it as an integer. If the end of the file is reached or an error occurs, the function returns EOF.
    //It is possible to append a char to a std::string in C++ by using the += operator.
    while ( file.good() )
    {
        tinyBuf = file.get();
        if (!file.eof())
            buf += tinyBuf;
    }
    //buf.find(s1): This function call searches for the first occurrence of the substring s1 within the string buf.
    // returns the position (index) of the first character of the first occurrence of the substring s1 within buf. 
    //If the substring is not found, it returns std::string::npos, which is a constant representing the largest possible value for an element of type size_t.
    index = buf.find( s1 );
    while ( index != std::string::npos )
    {
        try {
            buf.erase(index, s1.length());
            buf.insert(index, s2);
        }
        //If index is greater than the length of buf, these operations will throw a std::out_of_range exception
        catch (std::out_of_range&){
            std::cerr << "Out of range in buffer" << std::endl;
        }
        //if you try to insert a string that would cause the total length to exceed the maximum size of the container std::string
        catch (std::length_error&) {
            std::cerr << "Length error in buffer" << std::endl;
        }
        index = buf.find( s1 );
    }
    //The stream insertion operator is used to write data to an output stream. When used with a std::string, it writes the contents of the string to the stream.
    newFile << buf;
    return ( 0 );
}