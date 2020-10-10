#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	private:
	std::string _type;
	std::string _name;

	public:
	Zombie(std::string name, std::string type);
	~Zombie();
	void	advert(void);
	void	set_type(std::string type);
	void	set_name(std::string type);
	std::string	get_type(void);
	std::string	get_name(void);
};

#endif
