#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
	std::string Cerebrum;
	std::string Brainstem;
	std::string Cerebellum;
	Brain *address;

	public:
	Brain();
	~Brain();
	std::string identifier(void);
};

#endif
