#include <iostream>
#include "Zombie.hpp"

void	Zombie::advert()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << "sand . . . and the sun ARGHHHH IT BURN . . ." << std::endl;
	// std::cout << this->name << " was born with type: " << this->type << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " died : (" << std::endl;
}

void Zombie::set_type(std::string type)
{
	this->_type = type;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
}

std::string Zombie::get_type(void)
{
	return (this->_type);
}

std::string Zombie::get_name(void)
{
	return (this->_name);
}
