#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::srand(std::time(nullptr));
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 50;
	this->_max_energy_point = 50;
	this->_level = 1;
	this->_name = std::string();
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
	std::cout << "Salut l'ami, je suis le gardien de ces lieux, mon nom est " << this->_name << " entre si tu l'ose" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
	std::srand(std::time(nullptr));
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 50;
	this->_max_energy_point = 50;
	this->_level = 1;
	this->_name = name;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
	std::cout << "Salut l'ami, je suis le gardien de ces lieux, mon nom est " << this->_name << " entre si tu l'ose" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SBIRE, je doit me retirer a plus" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav)
{
	std::srand(std::time(nullptr));
	this->_hit_points = scav._hit_points;
	this->_max_hit_points = scav._max_hit_points;
	this->_energy_points = scav._energy_points;
	this->_max_energy_point = scav._max_energy_point;
	this->_level = scav._level;
	this->_name = scav._name;
	this->_melee_attack_damage = scav._melee_attack_damage;
	this->_ranged_attack_damage = scav._ranged_attack_damage;
	this->_armor_damage_reduction = scav._armor_damage_reduction;
	std::cout << "Salut l'ami, je suis le gardien de ces lieux, mon nom est " << this->_name << " entre si tu l'ose" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	std::srand(std::time(nullptr));
	this->_hit_points = scavtrap._hit_points;
	this->_max_hit_points = scavtrap._max_hit_points;
	this->_energy_points = scavtrap._energy_points;
	this->_max_energy_point = scavtrap._max_energy_point;
	this->_level = scavtrap._level;
	this->_name = scavtrap._name;
	this->_melee_attack_damage = scavtrap._melee_attack_damage;
	this->_ranged_attack_damage = scavtrap._ranged_attack_damage;
	this->_armor_damage_reduction = scavtrap._armor_damage_reduction;
	std::cout << "Salut l'ami, je suis le gardien de ces lieux, mon nom est " << this->_name << " entre si tu l'ose" << std::endl;
	return (*this);
}

void ScavTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->_name << " attaque " << target << " à distance, causant " << this->_ranged_attack_damage << " points de dégâts !" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->_name << " attaque " << target << " au corps-à-corps, causant " << this->_melee_attack_damage << " points de dégâts !" << std::endl;
}

void ScavTrap::takeDamage(size_t amount)
{
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

void ScavTrap::beRepaired(size_t amount)
{
	std::cout << this->_name << ": Merci Dr Zed" << std::endl;
	if ((size_t)this->_hit_points + amount <= (size_t)this->_max_hit_points)
		this->_hit_points = this->_hit_points + amount;
	else
		this->_hit_points = this->_max_hit_points;
}

void ScavTrap::challengeNewcomer(const std::string &target)
{
	const char* challenge[] = {
		" d'aller cherche de la colle pour reconstituer la boussole",
		" d'aller acheter un bouclier",
		" de lui trouver un(e) amoureux",
		" de lui trouver du travail",
		" d'aller tuer Jack"
	};

	std::cout << this->_name << " propose a " << target << challenge[((std::rand() + (unsigned long)this) % 5)] << std::endl;

}
