#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
	std::string	_name;
	int			_ap;
	AWeapon		*_weapon;

	public:
	Character();
	Character(const std::string &name);
	~Character();
	Character(const Character &character);
	Character &operator=(const Character &character);
	void recoverAP();
	void equip(AWeapon* weapon);
	void attack(Enemy*);
	const std::string getName() const;
	int		getAP() const;
	const AWeapon *getWeapon() const;
};

std::ostream &operator<<(std::ostream &os, const Character &character);

#endif
