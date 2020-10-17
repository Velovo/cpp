#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : _hit_points(100), _max_hit_points(100), _energy_points(100), _max_energy_point(100), _level(1), _name(name), _melee_attack_damage(30), _ranged_attack_damage(20), _armor_damage_reduction(5)
{
	std::srand(std::time(nullptr));
	std::cout << "Je me presente, je suis un robot multifonction CL4P-TP, mais mes amis m'apelle " << this->_name << " enfin m'appelleraient s'il en restait encore un en vie, ou si j'en avais" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "DES ESCALIERS NAAAAAAAAAAAN" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
	std::srand(std::time(nullptr));
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
	std::srand(std::time(nullptr));
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

void FragTrap::takeDamage(size_t amount)
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

void FragTrap::beRepaired(size_t amount)
{
	std::cout << this->_name << ": Merci Dr Zed" << std::endl;
	if ((size_t)this->_hit_points + amount <= (size_t)this->_max_hit_points)
		this->_hit_points = this->_hit_points + amount;
	else
		this->_hit_points = this->_max_hit_points;
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
