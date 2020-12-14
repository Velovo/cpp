#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
	const std::string _name;
	bool _signed;
	const int _g_sign;
	const int _g_exec;

	public:
	Form();
	~Form();
	Form(const std::string name, const int g_sign, const int g_exec);
	Form(const Form &form);
	Form &operator=(const Form &form);

	bool beSigned(const Bureaucrat &bureaucrat);

	const std::string getName() const;
	bool is_signed() const;
	int getSign() const;
	int getExec() const;

	class GradeTooHighException : public std::exception
	{
		public:
		virtual ~GradeTooHighException() throw();
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		virtual ~GradeTooLowException() throw();
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
