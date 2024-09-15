#include "Harl.hpp"

void	harlFilter(std::string level)
{
	if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	Harl	harl;

	switch (level[0])
	{
		case 'E':
            harl.complain("ERROR");
            std::cout << std::endl;
        break ;
        case 'W':
            harl.complain("WARNING");
            std::cout << std::endl;
            harl.complain("ERROR");
            std::cout << std::endl;
        break ;
        case 'I':
            harl.complain("INFO");
            std::cout << std::endl;
            harl.complain("WARNING");
            std::cout << std::endl;
            harl.complain("ERROR");
            std::cout << std::endl;
        break ;
        case 'D':
            harl.complain("DEBUG");
            std::cout << std::endl;
            harl.complain("INFO");
            std::cout << std::endl;
            harl.complain("WARNING");
            std::cout << std::endl;
            harl.complain("ERROR");
            std::cout << std::endl;
        break ;
    }
}

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac != 2)
	{
		std::cout << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		return (1);
	}
	harlFilter(av[1]);
	return (0);
}