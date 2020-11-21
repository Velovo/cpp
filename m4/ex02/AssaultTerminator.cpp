#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &assaultterminator)
{
	(void)assaultterminator;
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &assaultterminator)
{
	(void)assaultterminator;
	return (*this);
}

ISpaceMarine *AssaultTerminator::clone() const
{
	ISpaceMarine *tmp = new AssaultTerminator;

	return (tmp);
}

void AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;
}

void AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attaque with chainfists *" << std::endl;
}
