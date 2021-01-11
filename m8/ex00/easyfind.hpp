#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<class T>
typename T::iterator easyfind(T &containers, int find)
{
	try
	{
        typename T::iterator ret;

		if ((ret = std::find(containers.begin(), containers.end(), find)) != containers.end())
			return ret;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    throw std::exception();
}

#endif
