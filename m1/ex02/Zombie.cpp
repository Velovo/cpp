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
	std::cout << this->name << " was born with type: " << this->type << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " died : (" << std::endl;
}
