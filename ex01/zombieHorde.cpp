#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
    Zombie *ZombieArray;
	if (N < 1)
	{
		std::cout << "A Horde cannot contain less than 1 Zombie." << std::endl;
		return (NULL);
	}
	try {
        ZombieArray = new Zombie[N];
    }
    catch(std::bad_alloc&) {
        std::cerr << "Allocation of the horde failed" << std::endl;
        return (NULL);
    }
	for (int i = 0; i < N; i++) {
		ZombieArray[i].setName(name);
    }
	return (ZombieArray);
}