#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
	const std::string _name;
	std::string _target;
	bool _signed;
	const int _g_sign;
	const int _g_exec;

	public:
	Form();
	virtual ~Form();
	Form(const std::string name, const int g_sign, const int g_exec);
	Form(const Form &form);
	Form &operator=(const Form &form);

	bool beSigned(const Bureaucrat &bureaucrat);

	const std::string getName() const;
	bool is_signed() const;
	int getSign() const;
	int getExec() const;

	void set_target(std::string target);
	std::string get_target() const;

	virtual void execute(Bureaucrat const & executor) const;
	virtual void _execute() const = 0;

	virtual Form *clone(std::string name) const = 0;

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
	class FormNotSigned : public std::exception
	{
		public:
		virtual ~FormNotSigned() throw();
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
