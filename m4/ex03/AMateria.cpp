#include "AMateria.hpp"

AMateria::AMateria(void) : _type(NULL), _xp(0) { }

AMateria::~AMateria(void) { }

AMateria::AMateria(const std::string &type) : _type(type), _xp(0) { }

AMateria &AMateria::operator=(const AMateria &amateria)
{
	this->_type = amateria.getType();
	this->_xp = amateria.getXP();
	return (*this);
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
	(void)target;
	this->_xp = this->_xp + 10;
}
