#include "Weapon.hpp"

// The constructor initializes the _type attribute with the type parameter.
// Initializer lists are used to initialize member variables before the constructor body executes.
Weapon::Weapon(std::string type) : _type(type)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

//getType() member function returns a const reference to type
std::string const	&Weapon::getType(void)
{
	return (this->_type);
}

//setType() member function sets type using the new one passed as parameter
void	Weapon::setType(std::string type)
{
	this->_type = type;
}