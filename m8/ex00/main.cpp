#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main(void)
{
	try
	{
		std::vector<int> v;
		std::vector<int>::iterator vi;

		for (int i = 0; i < 50; ++i)
			v.push_back(i);
		vi = easyfind(v, 39);
		std::cout << "vector:   index: " << vi - v.begin() << "                     |   value: " << *vi << std::endl;
	}
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }

	try
	{
		std::list<int> l;
		std::list<int>::iterator li;
		
		for (int i = 50; i < 100; ++i)
			l.push_back(i);
		li = easyfind(l, 60);
		std::cout << "list:     index: list don't have index  |   value: " << *li << std::endl;
	}
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }

	try
	{
		std::vector<int> v;
		std::vector<int>::iterator vi;

		for (int i = 0; i < 50; ++i)
			v.push_back(i);
		vi = easyfind(v, 70);
		std::cout << "vector:   index: " << vi - v.begin() << "                     |   value: " << *vi << std::endl;
	}
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
}
