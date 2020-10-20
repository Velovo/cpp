#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <cstdlib>
# include <ctime>

class NinjaTrap : virtual public ClapTrap
{
	public:
	NinjaTrap();
	NinjaTrap(const std::string &name);
	~NinjaTrap();
	NinjaTrap(const NinjaTrap &ninjatrap);
	NinjaTrap &operator=(const NinjaTrap &ninjatrap);
	int		rangedAttack(const std::string &target);
	int		meleeAttack(const std::string &target);
	void	ninjaShoebox(FragTrap &fragtrap);
	void	ninjaShoebox(ScavTrap &scavtrap);
	void	ninjaShoebox(NinjaTrap &ninjatrap);
	void	ninjaShoebox(ClapTrap &claptrap);
};

#endif
