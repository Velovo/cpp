#include "Form.hpp"

Form::Form(const std::string name, const int g_sign, const int g_exec) : _name(name), _signed(false), _g_sign(g_sign), _g_exec(g_exec)
{
	if (this->_g_sign < 1 || this->_g_exec < 1)
		throw Form::GradeTooHighException();
	if (this->_g_sign > 150 || this->_g_exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &form) : _name(form._name), _signed(form._signed), _g_sign(form._g_sign), _g_exec(form._g_exec)
{
	*this = form;
}

Form &Form::operator=(const Form &form)
{
	if (this != &form)
		this->_signed = form.is_signed();
	return (*this);
}

bool Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getSign())
	{
		this->_signed = true;
		return (true);
	}
	else
		return (false);
}

const std::string Form::getName() const
{
	return (this->_name);
}

bool Form::is_signed() const
{
	return (this->_signed);
}

int Form::getSign() const
{
	return (this->_g_sign);
}

int Form::getExec() const
{
	return (this->_g_exec);
}

Form::GradeTooHighException::~GradeTooHighException() throw() { }

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Something's wrong, you tried to raise the form's grade too much");
}

Form::GradeTooLowException::~GradeTooLowException() throw() { }

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Something's wrong, you tried to lower the form's grade too much");
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	std::cout << "Form " << form.getName() << (form.is_signed() == true ? " IS" : " is NOT")\
	<< " signed, require a grade of " << form.getSign() << " to be signed and a grade of "\
	<< form.getExec() << " to be executed" << std::endl;
	return (os);
}
