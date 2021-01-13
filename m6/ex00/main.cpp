#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include "scalar_conversion.hpp"

int main(int argc, char **argv)
{
	std::cout << std::fixed << std::setprecision(1);
	if (argc < 2)
	{
		std::cout << "./convert [str]" << std::endl;
		return 1;
	}
	for (int i = 1; i < argc; ++i)
	{
		std::string inp(argv[i]);
		if (std::strlen(argv[i]) == 3 && argv[i][0] == '\'' && argv[i][2] == '\'')
		{
			std::stringstream ss;
			ss << static_cast<int> (argv[i][1]);
			inp = ss.str();
		}
		Scal scal(inp);
		try
		{
			char c;

			std::cout << "char: ";
			c = static_cast<char> (scal);
			if (c < ' ' || c > 126)
				std::cout << "Non displayable" << std::endl;
			else
				std::cout << c << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			int i;

			std::cout << "int: ";
			i = static_cast<int> (scal);
			std::cout << i << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			float f;

			std::cout << "float: ";
			f = static_cast<float> (scal);
			std::cout << f << "f" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			double d;

			std::cout << "double: ";
			d = static_cast<float> (scal);
			std::cout << d << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		if (i != argc - 1)
			std::cout << std::endl << std::endl << std::endl;
	}
}
