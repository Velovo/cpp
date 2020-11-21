#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { }

Ice::~Ice() { }

Ice::Ice(const Ice &ice) : AMateria("ice") { this->_xp = ice.getXP(); }

Ice &Ice::operator=(const Ice &ice)
{
	this->_type = ice.getType();
	this->_xp = ice.getXP();
	return (*this);
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
}
