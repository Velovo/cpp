#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern test;
	Bureaucrat br = Bureaucrat("top", 1);
	try
	{
		Form *form = test.makeForm("PresidentialPardonForm", "lena");
		br.signForm(*form);
		br.executeForm(*form);
		delete (form);
		form = test.makeForm("RobotmyRequestForm", "piaf");
		br.signForm(*form);
		br.executeForm(*form);
		delete (form);
		form = test.makeForm("ShrubberyCreationForm", "usb");
		br.signForm(*form);
		br.executeForm(*form);
		delete (form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form *form = test.makeForm("i dont exist", "test");
		if (form != NULL)
		{
			br.signForm(*form);
			br.executeForm(*form);
			delete (form);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
