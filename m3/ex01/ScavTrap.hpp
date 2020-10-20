#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

class ScavTrap
{
	private:
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
