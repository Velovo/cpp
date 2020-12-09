#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade = grade;
	}
}

Bureaucrat::~Bureaucrat() { }

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat._name), _grade(bureaucrat._grade) { }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	if (this != &bureaucrat)
	{
		this->_grade = bureaucrat._grade;
	}
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int		Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::signForm(Form &form)
{
	if (form.beSigned(*this) == true)
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	else
		std::cout << this->getName() << " can't signs form " << form.getName() << " because his grade is too low: " << this->_grade << " < " << form.getSign() << std::endl;
}

void	Bureaucrat::inc_grade()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = this->_grade - 1;
}

void	Bureaucrat::dec_grade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = this->_grade + 1;
}

void	Bureaucrat::inc_grade(unsigned int nbr)
{
	if (this->_grade - nbr < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = this->_grade - nbr;
}

void	Bureaucrat::dec_grade(unsigned int nbr)
{
	if (this->_grade + nbr > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = this->_grade + nbr;
}


Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() { }

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Something's wrong, you tried to raise the grade too much");
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() { }

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Something's wrong, you tried to lower the grade too much");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (os);
}
