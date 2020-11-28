#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include <iostream>

int	main()
{
	{
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");

		std::cout << robert << jim << joe;
		robert.polymorph(jim);
		robert.polymorph(joe);
	}

	{
		Sorcerer src("Rob", "The great one");
		Sorcerer test(src);
		Peon vic("vic");

		test.polymorph(vic);
		std::cout << vic << test;
	}
}
