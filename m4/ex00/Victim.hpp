#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	protected:
	std::string	_name;

	public:
	Victim(const std::string &name);
	~Victim();
	Victim(const Victim &victim);
	Victim &operator=(const Victim &victim);
	virtual void	getPolymorphed() const;
	std::string getname() const;
};

std::ostream &operator<<(std::ostream &os, const Victim &victim);

#endif
