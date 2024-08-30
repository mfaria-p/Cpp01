#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *pointer;

    pointer = new Zombie(name);
    return (pointer);
}