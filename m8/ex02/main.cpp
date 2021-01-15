#include <stack>
#include <iostream>
#include "mutantstack.hpp"

class Test1212
{
	public:
	int _n;
	Test1212(int n) : _n(n) { };
};

int main(void)
{
	try
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl << std::endl;
		it = mstack.begin();
		--ite;
		--it;
		while (ite != it)
		{
			std::cout << *ite << std::endl;
			--ite;
		}
		std::cout << std::endl;
		std::stack<int> s(mstack);
		std::cout << s.size() << std::endl;
	}
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
	std::cout << std::endl << std::endl << std::endl;
	try
	{
		MutantStack<Test1212> mystack;
		for (int i = 0; i < 10; ++i)
		{
			Test1212 test(i);
			mystack.push(test);
		}
		MutantStack<Test1212>::iterator it = mystack.begin();
		MutantStack<Test1212>::iterator ite = mystack.end();
		while (it != ite)
		{
			std::cout << it->_n << std::endl;
			++it;
		}
		std::cout << std::endl << std::endl;
		MutantStack<Test1212> tmp(mystack);
		std::cout << mystack.size() << std::endl;
		std::cout << tmp.size() << std::endl;
	}
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
	
	return 0;
}
