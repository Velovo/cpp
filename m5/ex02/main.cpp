#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat test = Bureaucrat("test", 135);
		ShrubberyCreationForm tree = ShrubberyCreationForm("maison");

		test.signForm(tree);
		test.executeForm(tree);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}