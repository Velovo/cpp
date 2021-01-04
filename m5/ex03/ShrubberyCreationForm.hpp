#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

# include <iostream>
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
	ShrubberyCreationForm();
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &shrubberycreationform);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shrubberycreationform);

	void _execute() const;
	Form *clone(std::string name) const;
};

#endif
