#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
	TacticalMarine();
	virtual ~TacticalMarine();
	TacticalMarine(const TacticalMarine &tacticalmarine);
	TacticalMarine &operator=(const TacticalMarine &tacticalmarine);

	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
