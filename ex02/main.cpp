#include <iostream>

//It gives another name to the same memory location.
//stringREF is a reference to the string variable. Any operations performed on stringREF are directly applied to string, as they both refer to the same memory location.
//Unlike pointers, references cannot be changed to refer to another variable after they are initialized.
int main( void )
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << &string << std::endl; //memory address of the string variable
    std::cout << stringPTR << std::endl; //memory address held by stringPTR
    std::cout << &stringREF << std::endl; //memory address held by stringREF

    std::cout << string << std::endl; //value of the string variable
    std::cout << *stringPTR << std::endl; //value pointed to by stringPTR
    std::cout << stringREF << std::endl; //value pointed to by stringREF
}