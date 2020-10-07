#include "Pony.hpp"

int main(void)
{
	std::cout << "stack:" << std::endl;
	ponyOnTheStack("white", "invisible", "chestnut", 150);
	std::cout << std::endl;
	std::cout << "heap:" << std::endl;
	ponyOnTheHeap("brown", "dark", "tobiano", 133);

	//faire un check de leaks
}