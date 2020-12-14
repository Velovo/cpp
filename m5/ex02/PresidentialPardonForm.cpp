#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->set_target(target);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialpardonform) : Form(presidentialpardonform.getName(), 25, 5)
{
	*this = presidentialpardonform;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialpardonform)
{
	return (*this);
}

void PresidentialPardonForm::_execute() const
{
	std::cout << this->get_target() << " has been forgiven by Zafod Beeblebrox" << std::endl;
}
