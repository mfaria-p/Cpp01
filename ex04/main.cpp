#include "Replace.hpp"

int main(int ac, char **av)
{
    if ( ac != 4 )
    {
        std::cerr << "Usage: <file_to_replace> <string_to_change> <string_to_insert>" << std::endl;
        return ( 1 );
    }
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (s1.empty() || s2.empty() || s1 == s2)
    {
        std::cerr << "Invalid arguments: no empty or equal arguments" << std::endl;
        return ( 1 );
    }
    if (replace( av[1], s1, s2 ))
        return ( 1 );
    return ( 0 );
}