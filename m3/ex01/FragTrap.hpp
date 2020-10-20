#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

class FragTrap
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
	FragTrap(const std::string &name);
	~FragTrap();
	FragTrap(const FragTrap &fragtrap);
	FragTrap &operator=(const FragTrap &fragtrap);
	void rangedAttack(const std::string &target);
	void meleeAttack(const std::string &target);
	void takeDamage(size_t amount);
	void beRepaired(size_t amount);
	void vaulthunter_dot_exe(const std::string &target);
};

#endif
