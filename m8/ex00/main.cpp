#include <iostream>
#include <iterator>
#include <vector>
#include <map>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v;
	std::map<int, int> m;

	for (int i = 0; i < 50; ++i)
		v.push_back(i);
	std::cout << easyfind(v, 39) << std::endl;

	// for (int i = 0; i < 50; ++i)
	// 	m.insert(std::pair<int, int>(i, i));
	// std::cout << easyfind(m, 39) << std::endl;
}
