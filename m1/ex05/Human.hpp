#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human
{
	private:
	Brain mybrain;

	public:
	Human();
	~Human();
	std::string identifier(void);
	Brain getBrain(void);
};

#endif
