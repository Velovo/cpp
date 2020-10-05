#ifndef Zombie_hpp
# define Zombie_hpp

#include <iostream>
#include <string.h>

class Zombie
{
	private:
	std::string name;
	std::string type;

	public:
	Zombie(std::string name, std::string type);
	~Zombie();
	void advert() {
		std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss ..." << std::endl;
	}
};

#endif
