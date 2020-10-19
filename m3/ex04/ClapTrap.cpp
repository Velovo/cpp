#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap mother class constructor called" << std::endl;
	std::srand(std::time(nullptr));
	this->_hit_points = 0;
	this->_max_hit_points = 0;
	this->_energy_points = 0;
	this->_max_energy_point = 0;
	this->_level = 0;
	this->_name = "";
	this->_melee_attack_damage = 0;
	this->_ranged_attack_damage = 0;
	this->_armor_damage_reduction = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap mother class destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	std::cout << "ClapTrap mother class constructor called" << std::endl;
	std::srand(std::time(nullptr));
	this->_hit_points = claptrap._hit_points;
	this->_max_hit_points = claptrap._max_hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_max_energy_point = claptrap._max_energy_point;
	this->_level = claptrap._level;
	this->_name = claptrap._name;
	this->_melee_attack_damage = claptrap._melee_attack_damage;
	this->_ranged_attack_damage = claptrap._ranged_attack_damage;
	this->_armor_damage_reduction = claptrap._armor_damage_reduction;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	std::cout << "ClapTrap mother class constructor called" << std::endl;
	std::srand(std::time(nullptr));
	this->_hit_points = claptrap._hit_points;
	this->_max_hit_points = claptrap._max_hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_max_energy_point = claptrap._max_energy_point;
	this->_level = claptrap._level;
	this->_name = claptrap._name;
	this->_melee_attack_damage = claptrap._melee_attack_damage;
	this->_ranged_attack_damage = claptrap._ranged_attack_damage;
	this->_armor_damage_reduction = claptrap._armor_damage_reduction;
	return (*this);
}

std::string ClapTrap::getname()
{
	return (std::string(this->_name));
}

void ClapTrap::takeDamage(size_t amount)
{
	if (amount < (size_t)this->_armor_damage_reduction)
	{
		std::cout << "AHAHA YOUR ATTACKS ARE USELESS" << std::endl;
		return ;
	}
	if ((amount - (size_t)this->_armor_damage_reduction) < (size_t)this->_hit_points)
	{
		std::cout << this->_name << ": PROTEGE MOI SBIRE" << std::endl;
		this->_hit_points = this->_hit_points - (amount - this->_armor_damage_reduction);
	}
	else
	{
		std::cout << this->_name << ": SBIRE JE NE PEUX ENCAISSER PLUS" << std::endl;
		this->_hit_points = 0;
	}
}

void ClapTrap::beRepaired(size_t amount)
{
	std::cout << this->_name << ": Merci Dr Zed" << std::endl;
	if ((size_t)this->_hit_points + amount <= (size_t)this->_max_hit_points)
		this->_hit_points = this->_hit_points + amount;
	else
		this->_hit_points = this->_max_hit_points;
}
