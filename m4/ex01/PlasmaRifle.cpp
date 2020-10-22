#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	;
}

PlasmaRifle::~PlasmaRifle()
{
	;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &pr) : AWeapon(pr.getName(), pr.getAPCost(), pr.getDamage())
{
	;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &pr)
{
	this->_name = pr.getName();
	this->_apcost = pr.getAPCost();
	this->_damage = pr.getDamage();
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
