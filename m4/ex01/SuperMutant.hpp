#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"
# include <iostream>

class SuperMutant : public Enemy
{
	public:
	SuperMutant();
	~SuperMutant();
	SuperMutant(const SuperMutant &sm);
	SuperMutant &operator=(const SuperMutant &sm);
	void takeDamage(int dmg);
};

#endif
