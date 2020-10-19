#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
	FragTrap();
	FragTrap(const std::string &name);
	~FragTrap();
	FragTrap(const FragTrap &fragtrap);
	FragTrap &operator=(const FragTrap &fragtrap);
	int rangedAttack(const std::string &target);
	int meleeAttack(const std::string &target);
	void vaulthunter_dot_exe(const std::string &target);
};

#endif
