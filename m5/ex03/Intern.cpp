#include "Intern.hpp"

Intern::Intern() : _fnbr(FNBR)
{
	this->_form[0] = new ShrubberyCreationForm("");
	this->_form[1] = new RobotmyRequestForm("");
	this->_form[2] = new PresidentialPardonForm("");
}

Intern::~Intern()
{
	for (size_t i = 0; i < this->_fnbr; ++i)
	{
		delete this->_form[i];
	}
}

Intern::Intern(const Intern &intern) : _fnbr(FNBR)
{
	*this = intern;
}

Intern &Intern::operator=(const Intern &intern)
{
	(void)intern;
	this->_form[0] = new ShrubberyCreationForm("");
	this->_form[1] = new RobotmyRequestForm("");
	this->_form[2] = new PresidentialPardonForm("");
	return (*this);
}

Form *Intern::makeForm(std::string form, std::string target)
{
	for (size_t i = 0; i < this->_fnbr; ++i)
	{
		if (form == this->_form[i]->getName())
			return this->_form[i]->clone(target);
	}
	throw Intern::FormDontExist();
	return NULL;	
}

Intern::FormDontExist::~FormDontExist() throw() { }

const char* Intern::FormDontExist::what() const throw()
{
	return ("Something's wrong, the form doesnt exist");
}
