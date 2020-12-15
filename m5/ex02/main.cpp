#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat test = Bureaucrat("test", 1);
		ShrubberyCreationForm tree = ShrubberyCreationForm("maison");
		PresidentialPardonForm pardon = PresidentialPardonForm("arthur");
		RobotmyRequestForm perc = RobotmyRequestForm("mur");

		test.signForm(tree);
		test.signForm(pardon);
		test.signForm(perc);

		test.executeForm(tree);
		test.executeForm(pardon);
		test.executeForm(perc);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << std::endl << std::endl;
	try
	{
		Bureaucrat test1 = Bureaucrat("test1", 70);
		Bureaucrat test2 = Bureaucrat("test2", 40);
		RobotmyRequestForm perc = RobotmyRequestForm("maison");
		test1.signForm(perc);
		test2.executeForm(perc);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << std::endl << std::endl;
	try
	{
		Bureaucrat test = Bureaucrat("test", 70);
		RobotmyRequestForm perc = RobotmyRequestForm("maison");
		test.signForm(perc);
		test.executeForm(perc);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << std::endl << std::endl;
	try
	{
		Bureaucrat test = Bureaucrat("test", 5);
		RobotmyRequestForm perc = RobotmyRequestForm("maison");
		test.executeForm(perc);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}