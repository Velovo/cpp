#include "Array.hpp"

int main(void)
{
	try
	{
		Array<int> test(20);

		test[0] = 0x41;
		std::cout << test[0] << std::endl << test[19] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Array<char> test(1);

		test[0] = 0x41;
		std::cout << test[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Array<int> test = Array<int> ();

		std::cout << test.len() << std::endl;
		test[0] = 0x41;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}