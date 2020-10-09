#include "Human.hpp"

Human::Human()
{
	;
}

Human::~Human()
{
	;
}

std::string Human::identifier(void)
{
	return (this->mybrain.identifier());
}

Brain Human::getBrain(void)
{
	return(this->mybrain);
}
