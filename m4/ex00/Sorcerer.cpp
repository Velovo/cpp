#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << " is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer)
{
	this->_name = sorcerer.getname();
	this->_title = sorcerer.gettitle();
	std::cout << this->_name << ", " << this->_title << " is born!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &sorcerer)
{
	this->_name = sorcerer.getname();
	this->_title = sorcerer.gettitle();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer)
{
	os << "I am " << sorcerer.getname() << ", " << sorcerer.gettitle() << ", and i like ponies!" << std::endl;
	return (os);
}

std::string Sorcerer::getname() const
{
	return (this->_name);
}

std::string Sorcerer::gettitle() const
{
	return (this->_title);
}

void		Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}
