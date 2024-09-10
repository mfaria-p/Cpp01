#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream> // for std::cout in main.cpp

class	Weapon
{
    private:
		std::string			_type;
	public:
		Weapon(std::string type);
		~Weapon(void);

		std::string const	&getType(void);
		void				setType(std::string type);
};

#endif