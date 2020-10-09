#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
	;
}

const std::string Weapon::getType(void)
{
	const std::string &ref = this->type;

	return (ref);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
