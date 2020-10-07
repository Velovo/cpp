#include "Pony.hpp"

void ponyOnTheStack(std::string mane, std::string tail, std::string coat, int height)
{
	Pony stacked;

	stacked.set_mane(mane);
	stacked.set_tail(tail);
	stacked.set_coat(coat);
	stacked.set_height(height);

	std::cout << "mane: " << stacked.get_mane() << "\n";
	std::cout << "tail: " << stacked.get_tail() << "\n";
	std::cout << "coat: " << stacked.get_coat() << "\n";
	std::cout << "height: " << stacked.get_height() << "\n";
}

void ponyOnTheHeap(std::string mane, std::string tail, std::string coat, int height)
{
	Pony *heaped;

	heaped = new Pony;

	heaped->set_mane(mane);
	heaped->set_tail(tail);
	heaped->set_coat(coat);
	heaped->set_height(height);

	std::cout << "mane: " << heaped->get_mane() << "\n";
	std::cout << "tail: " << heaped->get_tail() << "\n";
	std::cout << "coat: " << heaped->get_coat() << "\n";
	std::cout << "height: " << heaped->get_height() << "\n";

	delete heaped;
}

Pony::Pony(void)
{
	std::cout << "Pony created" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Pony destroyed" << std::endl;
}
