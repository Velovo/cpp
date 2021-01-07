#include "iter.hpp"
#include <iostream>
#include <string>

void test(int &i)
{
	i = i + 1;
}

void print(int &i)
{
	std::cout << i;
}

int main(void)
{
	int arr[] = {0, 1, 2, 3, 4};

	iter(arr, 5, test);
	iter(arr, 5, print);
}
