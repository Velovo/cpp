#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include <iostream>

class Goat : public Victim {
	public:
	Goat(std::string name) : Victim(name) { std::cout << "MEEEEEH" << std::endl; }
	~Goat() { std::cout << "AAAAAAAARGH" << std::endl; }
	void getPolymorphed() const { std::cout << this->_name << " was just polymorphed" << std::endl; }
};

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
		Goat vic("vic");

		test.polymorph(vic);
		std::cout << vic << test;
	}
}
