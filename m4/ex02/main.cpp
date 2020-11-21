#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

#include <iostream>

int main(void)
{
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISquad* vlc = new Squad;

		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	std::cout << std::endl << std::endl << std::endl;
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		Squad* vlc = new Squad;

		vlc->push(bob);
		vlc->push(jim);
		Squad *vlc2 = new Squad(vlc);
		delete vlc;
		vlc2->getUnit(0)->battleCry();
		vlc2->getUnit(1)->battleCry();
		delete vlc2;
	}
	std::cout << std::endl << std::endl << std::endl;
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* bob2 = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISpaceMarine* jim2 = new AssaultTerminator;

		Squad vlc;
		Squad vlc2;

		vlc.push(bob);
		vlc.push(jim2);
		vlc2.push(jim);
		vlc2.push(bob2);

		vlc2 = vlc;

		std::cout << vlc.getUnit(0) << std::endl;
		std::cout << vlc2.getUnit(0) << std::endl;
	}
	return 0;
}
