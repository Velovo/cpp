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
	Enemy(const Enemy &enemy);
	Enemy &operator=(const Enemy &enemy);
	const std::string	getType() const;
	int					getHP() const;
	virtual void		takeDamage(int dmg);
};

#endif
