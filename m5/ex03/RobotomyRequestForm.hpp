#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotmyRequestForm : public Form
{
	public:
	RobotmyRequestForm();
	virtual ~RobotmyRequestForm();
	RobotmyRequestForm(std::string target);
	RobotmyRequestForm(const RobotmyRequestForm &robotmyrequestform);
	RobotmyRequestForm &operator=(const RobotmyRequestForm &robotmyrequestform);

	void _execute() const;
	Form *clone(std::string name) const;
};

#endif
