#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
	;
}

PowerFist::~PowerFist()
{
	;
}

PowerFist::PowerFist(const PowerFist &pr) : AWeapon(pr.getName(), pr.getAPCost(), pr.getDamage())
{
	;
}

PowerFist &PowerFist::operator=(const PowerFist &pr)
{
	this->_name = pr.getName();
	this->_apcost = pr.getAPCost();
	this->_damage = pr.getDamage();
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
