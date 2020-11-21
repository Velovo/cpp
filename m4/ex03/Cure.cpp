#include "Cure.hpp"

Cure::Cure() : AMateria("cure") { }

Cure::~Cure() { }

Cure::Cure(const Cure &cure) : AMateria("cure") { this->_xp = cure.getXP(); }

Cure &Cure::operator=(const Cure &cure)
{
	this->_type = cure.getType();
	this->_xp = cure.getXP();
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
}
