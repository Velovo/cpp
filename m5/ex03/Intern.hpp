#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

# define FNBR 3

class Intern
{
	private:
	Form *_form[FNBR];
	size_t _fnbr;

	public:
	Intern();
	~Intern();
	Intern(const Intern &intern);
	Intern &operator=(const Intern &intern);

	Form *makeForm(std::string form, std::string target);

	class FormDontExist : public std::exception
	{
		public:
		virtual ~FormDontExist() throw();
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
