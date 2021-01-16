#include "span.hpp"

int main(void)
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
	try
	{
		Span sp = Span(100000);
		for (int i = 0; i < 100000; ++i)
			sp.addNumber(i);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
	try
	{
		std::vector<int> tmp;
		Span sp = Span(5);

		sp.addNumber(8);
		sp.addNumber(13);
		
		tmp.push_back(21);
		tmp.push_back(34);
		tmp.push_back(55);

		sp.addVector(tmp);
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
	try
	{
		std::vector<int> tmp;
		Span sp = Span(4);

		sp.addNumber(8);
		sp.addNumber(13);
		sp.addNumber(47);
		sp.addNumber(27);
		sp.addNumber(5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::vector<int> tmp;
		Span sp = Span(4);

		sp.addNumber(8);
		sp.addNumber(13);
		
		tmp.push_back(21);
		tmp.push_back(34);
		tmp.push_back(55);

		sp.addVector(tmp);
	}
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
	
}
