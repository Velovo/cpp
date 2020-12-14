#include "RobotomyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm(std::string target) : Form("RobotmyRequestForm", 72, 45)
{
	this->set_target(target);
}

RobotmyRequestForm::~RobotmyRequestForm()
{
	return ;
}

RobotmyRequestForm::RobotmyRequestForm(const RobotmyRequestForm &robotmyrequestform) : Form(robotmyrequestform.getName(), 72, 45)
{
	*this = robotmyrequestform;
}

RobotmyRequestForm &RobotmyRequestForm::operator=(const RobotmyRequestForm &robotmyrequestform)
{
	return (*this);
}

void RobotmyRequestForm::_execute() const
{
	std::cout << "* drill goes \"BRBRBRBRBRBRBBRBRBRBBRBRBRBRBBRBRBRBBRBRBRBRBBRBRBRBRB.BRBRR...BRBRB...\" *" << std::endl;
}
