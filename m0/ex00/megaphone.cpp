#include <iostream>

char test1212(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(int argc, char  **argv) 
{
    int i;
	int j;
	char c;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			c = test1212(argv[i][j]);
			std::cout << c;
			++j;
		}
		++i;
	}
	std::cout << "\n";
    return 0;
}
