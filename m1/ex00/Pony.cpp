#include "Pony.hpp"

void ponyOnTheStack(string mane, string tail, string coat, int height)
{
	Pony stacked;

	stacked.set_mane(mane);
	stacked.set_tail(tail);
	stacked.set_coat(coat);
	stacked.set_height(height);

	cout << "mane: " << stacked.get_mane() << "\n";
	cout << "tail: " << stacked.get_tail() << "\n";
	cout << "coat: " << stacked.get_coat() << "\n";
	cout << "height: " << stacked.get_height() << "\n";
}

void ponyOnTheHeap(string mane, string tail, string coat, int height)
{
	Pony *heaped;

	heaped = new Pony;

	heaped->set_mane(mane);
	heaped->set_tail(tail);
	heaped->set_coat(coat);
	heaped->set_height(height);

	cout << "mane: " << heaped->get_mane() << "\n";
	cout << "tail: " << heaped->get_tail() << "\n";
	cout << "coat: " << heaped->get_coat() << "\n";
	cout << "height: " << heaped->get_height() << "\n";

	delete heaped;
}
