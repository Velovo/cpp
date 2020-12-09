#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Form Hey = Form("f1", 2, 150);
		Form Hey2 = Form("f2", 1, 150);
		Bureaucrat b1 = Bureaucrat("b1", 3);
		Bureaucrat b2 = Bureaucrat("b2", 1);
		std::cout << b1 << b2 << Hey;
		b1.signForm(Hey);
		std::cout << Hey;
		b2.signForm(Hey);
		std::cout << Hey;
		b2.signForm(Hey2);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form test = Form("test", 0, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form test = Form("test", 160, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form test = Form("test", 10, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form test = Form("test", 10, 170);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
