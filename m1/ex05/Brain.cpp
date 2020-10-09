#include "Brain.hpp"
#include <sstream>
#include <string>

Brain::Brain()
{
	this->address = this;
}

Brain::~Brain()
{
	;
}

std::string Brain::identifier(void)
{
	std::stringstream addr;
	addr << this->address;
	std::string ret = addr.str();
	return (ret);
}
