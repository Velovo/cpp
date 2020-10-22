#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
{
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
}

AWeapon::~AWeapon()
{
	;
}

AWeapon::AWeapon(const AWeapon &weapon)
{
	this->_name = weapon._name;
	this->_apcost = weapon._apcost;
	this->_damage = weapon._damage;
}

AWeapon &AWeapon::operator=(const AWeapon &weapon)
{
	this->_name = weapon._name;
	this->_apcost = weapon._apcost;
	this->_damage = weapon._damage;;
	return (*this);
}

const std::string	AWeapon::getName() const
{
	return (this->_name);
}

int AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int AWeapon::getDamage() const
{
	return (this->_damage);
}
