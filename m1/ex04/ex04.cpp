#include <iostream>

int main(void)
{
	std::string mystr = std::string("HI THIS IS BRAIN");
	std::string *myptr = &mystr;
	std::string &myref = mystr;

	std::cout << *myptr << std::endl;
	std::cout << myref << std::endl;
}
