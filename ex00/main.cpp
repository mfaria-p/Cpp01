#include "Zombie.hpp"

//The NewZombie function creates a zombie, names it, and returns it so i can use it outside of the function
//The randomChump creates a zombie, names it, and the zombie announces itself, all inside the same function
int main()
{
    Zombie *Zombie1 = newZombie("Mariana");
    if (!Zombie1)
        return(1);
    Zombie1->announce();
    randomChump("Mini Mari");
    delete Zombie1;
    return(0);
}