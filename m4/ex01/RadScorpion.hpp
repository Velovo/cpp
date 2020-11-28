#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"
# include <iostream>

class RadScorpion : public Enemy
{
	public:
	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(const RadScorpion &rs);
	RadScorpion &operator=(const RadScorpion &rs);
};

#endif
