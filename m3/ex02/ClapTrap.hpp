#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

class ClapTrap
{
	protected:
	int			_hit_points;
	int			_max_hit_points;
	int			_energy_points;
	int			_max_energy_point;
	size_t		_level;
	std::string	_name;
	int			_melee_attack_damage;
	int			_ranged_attack_damage;
	int			_armor_damage_reduction;

	public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap &claptrap);
	ClapTrap &operator=(const ClapTrap &claptrap);
	void takeDamage(size_t amount);
	void beRepaired(size_t amount);
};

#endif
