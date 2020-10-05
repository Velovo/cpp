#include "Pony.hpp"

int main(void)
{
	cout << "stack:\n";
	ponyOnTheStack("white", "invisible", "chestnut", 150);
	cout << "\nheap:\n";
	ponyOnTheHeap("brown", "dark", "tobiano", 133);

	//faire un check de leaks
}