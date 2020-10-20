#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap(const std::string &name);
	~FragTrap();
	FragTrap(const FragTrap &fragtrap);
	FragTrap &operator=(const FragTrap &fragtrap);
	void rangedAttack(const std::string &target);
	void meleeAttack(const std::string &target);
	void vaulthunter_dot_exe(const std::string &target);
};

#endif
