#include <iostream>
#include "Zombie.hpp"

void	Zombie::advert()
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	std::cout << "sand . . . and the sun ARGHHHH IT BURN . . ." << std::endl;
	// std::cout << this->name << " was born with type: " << this->type << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " died : (" << std::endl;
}

void Zombie::set_type(std::string type)
{
	this->type = type;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}

std::string Zombie::get_type(void)
{
	return (this->type);
}

std::string Zombie::get_name(void)
{
	return (this->name);
}
