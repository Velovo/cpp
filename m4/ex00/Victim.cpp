#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "A random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "The victim " << this->_name << " died for no apparent reasons!" << std::endl;
}

Victim::Victim(const Victim &Victim)
{
	this->_name = Victim._name;
	std::cout << "A random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim &Victim::operator=(const Victim &Victim)
{
	this->_name = Victim._name;
	std::cout << "A random victim called " << this->_name << " just appeared!" << std::endl;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Victim &Victim)
{
	os << "I'm " << Victim.getname() << " and I like otters!" << std::endl;
	return (os);
}

std::string Victim::getname() const
{
	return (this->_name);
}

void		Victim::getPolymorphed() const
{
    std::cout << this->_name << " was just polymorphed in a cute little sheep!" << std::endl;
}
