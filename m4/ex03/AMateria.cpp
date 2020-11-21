#include "AMateria.hpp"

AMateria::AMateria(void) : _type(NULL), _xp(0) { }

AMateria::AMateria(const std::string &type) : _type(_type), _xp(0) { }

AMateria &AMateria::operator=(const AMateria &amateria)
{
	this->_type = amateria.getType();
	this->_xp = amateria.getXP();
}

const std::string &AMateria::getType() const
{
	return (this->_type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void AMateria::use(ICharacter &target)
{
	this->_xp += 10;
}
