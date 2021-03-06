#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name)
{
	std::srand(std::time(0));
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_point = 100;
	this->_level = 1;
	this->_name = name;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << "Je me presente, je suis un robot multifonction CL4P-TP, mais mes amis m'apelle " << this->_name << " enfin m'appelleraient s'il en restait encore un en vie, ou si j'en avais" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "DES ESCALIERS NAAAAAAAAAAAN" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
	std::srand(std::time(0));
	this->_hit_points = fragtrap._hit_points;
	this->_max_hit_points = fragtrap._max_hit_points;
	this->_energy_points = fragtrap._energy_points;
	this->_max_energy_point = fragtrap._max_energy_point;
	this->_level = fragtrap._level;
	this->_name = fragtrap._name;
	this->_melee_attack_damage = fragtrap._melee_attack_damage;
	this->_ranged_attack_damage = fragtrap._ranged_attack_damage;
	this->_armor_damage_reduction = fragtrap._armor_damage_reduction;
	std::cout << "Je me presente, je suis un robot multifonction CL4P-TP, mais mes amis m'apelle " << this->_name << " enfin m'appelleraient s'il en restait encore un en vie, ou si j'en avais" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
	std::srand(std::time(0));
	this->_hit_points = fragtrap._hit_points;
	this->_max_hit_points = fragtrap._max_hit_points;
	this->_energy_points = fragtrap._energy_points;
	this->_max_energy_point = fragtrap._max_energy_point;
	this->_level = fragtrap._level;
	this->_name = fragtrap._name;
	this->_melee_attack_damage = fragtrap._melee_attack_damage;
	this->_ranged_attack_damage = fragtrap._ranged_attack_damage;
	this->_armor_damage_reduction = fragtrap._armor_damage_reduction;
	std::cout << "Je me presente, je suis un robot multifonction CL4P-TP, mais mes amis m'apelle " << this->_name << " enfin m'appelleraient s'il en restait encore un en vie, ou si j'en avais" << std::endl;
	return (*this);
}

void FragTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->_name << " EXPLOSE " << target << " à distance, causant " << this->_ranged_attack_damage << " points de dégâts !" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->_name << " EXPLOSE " << target << " au corps-à-corps, causant " << this->_melee_attack_damage << " points de dégâts !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	const char* attacks[] = {
		" en lui mettant une enorme golden",
		" avec une arme Hyperion, merci Jake",
		" avec un cryo lance missile",
		" en dansant devant lui",
		" en devenant invisible et l'assassinant par derriere"
	};

	if (this->_energy_points - 25 >= 0)
	{
		this->_energy_points = this->_energy_points - 25;
		std::cout << this->_name << " attaque " << target << attacks[((std::rand() + (unsigned long)this) % 5)] << std::endl;
	}
	else
	{
		std::cout << this->_name << ": SBIRE laisse moi me reposer" << std::endl;
	}
}
