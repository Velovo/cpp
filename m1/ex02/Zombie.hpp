#ifndef ZOMBIE_HPP
# define ZOMBIE

#include <iostream>

class	Zombie
{
	private:
	std::string type;
	std::string name;

	public:
	Zombie(std::string name, std::string type);
	~Zombie();
	void	advert(void);
};

#endif
