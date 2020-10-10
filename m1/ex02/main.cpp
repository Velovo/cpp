#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent event;
	Zombie		*heap1;
	Zombie		*heap2;

	event.setZombieType(std::string("big"));
	heap1 = event.newZombie(std::string("heap1"));
	event.randomChump();
	event.randomChump();
	event.randomChump();
	event.setZombieType(std::string("small"));
	event.randomChump();
	event.randomChump();
	heap2 = event.newZombie(std::string("heap2"));
	delete heap2;
	event.randomChump();
	heap2 = event.newZombie(std::string("heap2"));
	heap1->advert();
	delete heap1;
	heap2->advert();
	delete heap2;
}
