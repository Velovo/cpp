#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &tacticalmarine)
{
	(void)tacticalmarine;
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &tacticalmarine)
{
	(void)tacticalmarine;
	return (*this);
}

ISpaceMarine *TacticalMarine::clone() const
{
	ISpaceMarine *tmp = new TacticalMarine;

	return (tmp);
}

void TacticalMarine::battleCry(void) const
{
	std::cout << "For the Holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
