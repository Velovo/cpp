#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	protected:
	int _hp;
	std::string _type;
	
	public:
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	const std::string	getType() const;
	int					getHP() const;
	virtual void		takeDamage(int dmg);
};

#endif
