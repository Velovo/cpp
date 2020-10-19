#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"
# include <iostream>

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:
	SuperTrap();
	SuperTrap(std::string name);
	~SuperTrap();
	SuperTrap(const SuperTrap &supertrap);
	SuperTrap &operator=(const SuperTrap &supertrap);
	int		rangedAttack(const std::string &target);
	int		meleeAttack(const std::string &target);
};

#endif
