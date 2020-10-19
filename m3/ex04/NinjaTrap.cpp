#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::srand(std::time(nullptr));
	this->_hit_points = 60;
	this->_max_hit_points = 60;
	this->_energy_points = 120;
	this->_max_energy_point = 120;
	this->_level = 1;
	this->_name = std::string();
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 0;
	std::cout << "I am an Interplanetary Ninja Assassin Claptrap aka " << this->_name << " watch your back" << std::endl;
}

NinjaTrap::NinjaTrap(const std::string &name)
{
	std::srand(std::time(nullptr));
	this->_hit_points = 60;
	this->_max_hit_points = 60;
	this->_energy_points = 120;
	this->_max_energy_point = 120;
	this->_level = 1;
	this->_name = name;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 0;
	std::cout << "I am an Interplanetary Ninja Assassin Claptrap aka " << this->_name << " watch your back" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "What's happening to me?" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjatrap)
{
	std::srand(std::time(nullptr));
	this->_hit_points = ninjatrap._hit_points;
	this->_max_hit_points = ninjatrap._max_hit_points;
	this->_energy_points = ninjatrap._energy_points;
	this->_max_energy_point = ninjatrap._max_energy_point;
	this->_level = ninjatrap._level;
	this->_name = ninjatrap._name;
	this->_melee_attack_damage = ninjatrap._melee_attack_damage;
	this->_ranged_attack_damage = ninjatrap._ranged_attack_damage;
	this->_armor_damage_reduction = ninjatrap._armor_damage_reduction;
	std::cout << "I am an Interplanetary Ninja Assassin Claptrap aka " << this->_name << " watch your back" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &ninjatrap)
{
	std::srand(std::time(nullptr));
	this->_hit_points = ninjatrap._hit_points;
	this->_max_hit_points = ninjatrap._max_hit_points;
	this->_energy_points = ninjatrap._energy_points;
	this->_max_energy_point = ninjatrap._max_energy_point;
	this->_level = ninjatrap._level;
	this->_name = ninjatrap._name;
	this->_melee_attack_damage = ninjatrap._melee_attack_damage;
	this->_ranged_attack_damage = ninjatrap._ranged_attack_damage;
	this->_armor_damage_reduction = ninjatrap._armor_damage_reduction;
	std::cout << "I am an Interplanetary Ninja Assassin Claptrap aka " << this->_name << " watch your back" << std::endl;
	return (*this);
}

int NinjaTrap::rangedAttack(const std::string &target)
{
	std::cout << "INAC " << this->_name << " assassine silencieusement " << target << " à distance, causant " << this->_ranged_attack_damage << " points de dégâts !" << std::endl;
    return (this->_ranged_attack_damage);
}

int NinjaTrap::meleeAttack(const std::string &target)
{
	std::cout << "INAC " << this->_name << " assassine silencieusement " << target << " au corps-à-corps, causant " << this->_melee_attack_damage << " points de dégâts !" << std::endl;
    return (this->_melee_attack_damage);
}

void NinjaTrap::ninjaShoebox(FragTrap &fragtrap)
{
    const char *attacks[] = {
        " It looks like you're writing a suicide note. Would you like help?",
        " A claptrap feels no pain, i will kill you",
        " Target disassembled",
        " I am not zero but i can do zero things",
        " A fragtrap can't hurt me"
    };

    std::cout << this->_name << " attaque " << fragtrap.getname() << attacks[((std::rand() + (unsigned long)this) % 5)] << std::endl;
    if (((std::rand() + (unsigned long)this) % 2) == 0)
		fragtrap.takeDamage(this->meleeAttack(fragtrap.getname()));
    else
		fragtrap.takeDamage(this->rangedAttack(fragtrap.getname()));
}

void NinjaTrap::ninjaShoebox(ScavTrap &scavtrap)
{
    const char *attacks[] = {
        " It looks like you're writing a suicide note. Would you like help?",
        " A claptrap feels no pain, i will kill you",
        " Target disassembled",
        " I am not zero but i can do zero things",
        " A scavtrap can't hurt me"
    };

    std::cout << this->_name << " attaque " << scavtrap.getname() << attacks[((std::rand() + (unsigned long)this) % 5)] << std::endl;
    if (((std::rand() + (unsigned long)this) % 2) == 0)
		scavtrap.takeDamage(this->meleeAttack(scavtrap.getname()));
    else
		scavtrap.takeDamage(this->rangedAttack(scavtrap.getname()));
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninjatrap)
{
    const char *attacks[] = {
        " It looks like you're writing a suicide note. Would you like help?",
        " A claptrap feels no pain, i will kill you",
        " Target disassembled",
        " I am not zero but i can do zero things",
        " A ninjatrap can't hurt me"
    };

    std::cout << this->_name << " attaque " << ninjatrap.getname() << attacks[((std::rand() + (unsigned long)this) % 5)] << std::endl;
    if (((std::rand() + (unsigned long)this) % 2) == 0)
		ninjatrap.takeDamage(this->meleeAttack(ninjatrap.getname()));
    else
		ninjatrap.takeDamage(this->rangedAttack(ninjatrap.getname()));
}

void NinjaTrap::ninjaShoebox(ClapTrap &claptrap)
{
    const char *attacks[] = {
        " It looks like you're writing a suicide note. Would you like help?",
        " A claptrap feels no pain, i will kill you",
        " Target disassembled",
        " I am not zero but i can do zero things",
        " A claptrap can't hurt me"
    };

    std::cout << this->_name << " attaque " << claptrap.getname() << attacks[((std::rand() + (unsigned long)this) % 5)] << std::endl;
}
