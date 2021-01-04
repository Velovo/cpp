#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
	PresidentialPardonForm();
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &presidentialpardonform);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &presidentialpardonform);

	void _execute() const;
	Form *clone(std::string name) const;
};

#endif
