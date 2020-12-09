#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		for (int i = 1; i < 150; ++i)
			Bureaucrat hey = Bureaucrat("test", i);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "successfully created a bureacrat in 1-150 grade range" << std::endl;
	try
	{
		Bureaucrat hey = Bureaucrat("test", 2);
		hey.inc_grade();
		std::cout << "grade: " << hey.getGrade() << std::endl;
		hey.inc_grade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "error, grade would have been 0" << std::endl;
	try
	{
		Bureaucrat hey = Bureaucrat("test", 145);
		hey.dec_grade(5);
		std::cout << "grade: " << hey.getGrade() << std::endl;
		hey.dec_grade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "error, grade would have been 150" << std::endl;
	return (0);
}
