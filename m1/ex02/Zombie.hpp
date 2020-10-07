#ifndef Zombie_hpp
# define Zombie_hpp

#include <iostream>

class Zombie
{
	private:
	std::string type;
	std::string name;

	public:
	Zombie(std::string name, std::string type);
	~Zombie();
	void advert(void);
};

#endif
