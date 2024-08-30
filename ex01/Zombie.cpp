#include "Zombie.hpp"

Zombie::Zombie(const std::string &inputname) {
    name = inputname;
}

Zombie::Zombie() {
}

Zombie::~Zombie() {
    std::cout << name << " was destroyed" << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(const std::string &inputname){
	name = inputname;
}