#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	protected:
	std::string _name;
	int _apcost;
	int _damage;

	public:
	AWeapon(const std::string &name, int apcost, int damage);
	virtual ~AWeapon();
	const std::string	getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif
