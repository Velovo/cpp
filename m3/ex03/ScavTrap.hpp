#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap(const std::string &name);
	~ScavTrap();
	ScavTrap(const ScavTrap &scavtrap);
	ScavTrap &operator=(const ScavTrap &scavtrap);
	void rangedAttack(const std::string &target);
	void meleeAttack(const std::string &target);
	void takeDamage(size_t amount);
	void beRepaired(size_t amount);
	void challengeNewcomer(const std::string &target);
};

#endif
