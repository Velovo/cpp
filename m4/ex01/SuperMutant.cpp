#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &sm) : Enemy(sm.getHP(), sm.getType())
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &sm)
{
	this->_hp = sm.getHP();
	this->_type = sm.getType();
	return (*this);
}

void SuperMutant::takeDamage(int dmg)
{
	if (dmg - 3 < 0)
		return ;
	else if (this->_hp < dmg - 3)
		this->_hp = 0;
	else
		this->_hp = this->_hp - (dmg - 3);
}
