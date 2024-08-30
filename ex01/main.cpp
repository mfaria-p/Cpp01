#include "Zombie.hpp"

int	main()
{
	Zombie	*ZombieArray;
	int		zombieAmount = 10;

	ZombieArray = zombieHorde(zombieAmount, "Maria");
	if (!ZombieArray)
		return (1);
	for (int i = 0; i < zombieAmount; ++i)
		ZombieArray[i].announce();

    //Used to deallocate memory that was allocated for an array of objects using new[]
	delete[] ZombieArray;
	ZombieArray = zombieHorde(0, "Failed");
	return (0);
}