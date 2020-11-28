#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
	AssaultTerminator();
	virtual ~AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &assaultterminator);
	AssaultTerminator &operator=(const AssaultTerminator &assaultterminator);

	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
