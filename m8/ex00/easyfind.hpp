#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<class T>
int easyfind(T containers, int find)
{
	try
	{
		if (std::find(containers.begin(), containers.end(), find) != containers.end())
			return std::find(containers.begin(), containers.end(), find) - containers.begin();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return -1;
}

#endif
