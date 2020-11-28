#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type)
{
	this->_hp = hp;
	this->_type = type;
}

Enemy::~Enemy()
{
	;
}

const std::string	Enemy::getType() const
{
	return (this->_type);
}

int					Enemy::getHP() const
{
	return (this->_hp);
}

void				Enemy::takeDamage(int dmg)
{
	if (dmg < 0)
		return ;
	else if (this->_hp < dmg)
	{
		this->_hp = 0;
		// std::cout << "* SPROTCH *" << std::endl;
	}
	else
		this->_hp = this->_hp - dmg;
}
