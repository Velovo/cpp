#include <stack>
#include <vector>
#include <iostream>
#include "mutantstack.hpp"

void showstack(std::stack<int> &s) 
{
	while (!s.empty()) 
	{ 
		std::cout << s.top() << std::endl; 
		s.pop(); 
	}
} 

int main(void)
{
	MutantStack<int> tes;

	tes.push(3);
	tes.push(17);
	MutantStack<int>::iterator it = tes.begin();
	MutantStack<int>::iterator ite = tes.end();

	std::cout << ite - it << std::endl;
}
