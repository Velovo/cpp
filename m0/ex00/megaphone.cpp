#include <iostream>
#include <string.h>

int main(int argc, char  **argv) 
{
    int		i;
	size_t	j;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < argc)
	{
		j = 0;
		while (j < strlen(argv[i]))
		{
			std::cout << (char)std::toupper(argv[i][j]);
			++j;
		}
		++i;
		if (i != argc)
			std::cout << " ";
	}
	std::cout << std::endl;
    return 0;
}
