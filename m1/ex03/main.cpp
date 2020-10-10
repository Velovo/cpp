#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int     main(void)
{
	ZombieHorde *horde1 = new ZombieHorde(3);
	ZombieHorde horde2 = ZombieHorde(5);

	horde1->announce();
	horde2.announce();
	delete horde1;
}
