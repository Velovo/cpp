#include "Character.hpp"

Character::Character(const std::string &name)
{
	this->_name = name;
	this->_ap = 40;
	this->_weapon = NULL;
}

Character::~Character()
{
	;
}

Character::Character(const Character &character)
{
	this->_name = character.getName();
	this->_ap = character.getAP();
}

Character &Character::operator=(const Character &character)
{
	this->_name = character.getName();
	this->_ap = character.getAP();
	return (*this);
}

void Character::recoverAP()
{
	if (this->_ap + 10 > 40)
		this->_ap = 40;
	else
		this->_ap = this->_ap + 10;
}

void Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void Character::attack(Enemy *en)
{
	if (this->_weapon == NULL)
	{
		std::cout << "No weapon equipped, can't attack" << std::endl;
		return ;
	}
	if (this->_ap - this->_weapon->getAPCost() >= 0)
	{
		this->_ap = this->_ap - this->_weapon->getAPCost();
		std::cout << this->getName() << " has attack " << en->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		en->takeDamage(this->_weapon->getDamage());
	}
	else
	{
		std::cout << "Need more AP soldier" << std::endl;
	}
}

const std::string Character::getName() const
{
	return (this->_name);
}

int		Character::getAP() const
{
	return (this->_ap);
}

const AWeapon *Character::getWeapon() const
{
	return (this->_weapon);
}

std::ostream &operator<<(std::ostream &os, const Character &character)
{
	if (character.getWeapon() == NULL)
		os << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	else
		os << character.getName() << " has " << character.getAP() << " AP and carries a " << character.getWeapon()->getName() << std::endl;
	return (os);
}
