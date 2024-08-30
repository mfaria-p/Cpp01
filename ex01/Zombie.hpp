#ifndef EX01_ZOMBIE_HPP
#define EX01_ZOMBIE_HPP

#include <iostream>

class Zombie {
    std::string name;
public:
    //constructors
    Zombie(const std::string &inputname);
    Zombie ();

    //destructor
    ~Zombie();

    //public methods
    void announce(void);
    void setName(const std::string &inputname);
};

Zombie *zombieHorde( int N, std::string name );

#endif