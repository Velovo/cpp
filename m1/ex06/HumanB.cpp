#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
	;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
