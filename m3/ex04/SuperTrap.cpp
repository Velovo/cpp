#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 120;
	this->_max_energy_point = 120;
	this->_level = 1;
	this->_name = "";
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << "MY NAME IS " << this->_name << " AND I AM THE BEST OF ALL" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : NinjaTrap(name), FragTrap(name)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 120;
	this->_max_energy_point = 120;
	this->_level = 1;
	this->_name = name;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << "MY NAME IS " << this->_name << " AND I AM THE BEST OF ALL" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << ". . . even the best of us can die" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &supertrap) : NinjaTrap(supertrap._name), FragTrap(supertrap._name)
{
	this->_hit_points = supertrap._hit_points;
	this->_max_hit_points = supertrap._max_hit_points;
	this->_energy_points = supertrap._energy_points;
	this->_max_energy_point = supertrap._max_energy_point;
	this->_level = supertrap._level;
	this->_name = supertrap._name;
	this->_melee_attack_damage = supertrap._melee_attack_damage;
	this->_ranged_attack_damage = supertrap._ranged_attack_damage;
	this->_armor_damage_reduction = supertrap._armor_damage_reduction;
	std::cout << "MY NAME IS " << this->_name << " AND I AM THE BEST OF ALL" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &supertrap)
{
	this->_hit_points = supertrap._hit_points;
	this->_max_hit_points = supertrap._max_hit_points;
	this->_energy_points = supertrap._energy_points;
	this->_max_energy_point = supertrap._max_energy_point;
	this->_level = supertrap._level;
	this->_name = supertrap._name;
	this->_melee_attack_damage = supertrap._melee_attack_damage;
	this->_ranged_attack_damage = supertrap._ranged_attack_damage;
	this->_armor_damage_reduction = supertrap._armor_damage_reduction;
    return (*this);
}

int SuperTrap::rangedAttack(const std::string &target)
{
    return (FragTrap::rangedAttack(target));
}

int SuperTrap::meleeAttack(const std::string &target)
{
    return (NinjaTrap::meleeAttack(target));
}
