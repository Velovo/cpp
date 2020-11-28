#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
	public:
	Peon();
	Peon(const std::string &name);
	~Peon();
	Peon(const Peon &peon);
	Peon &operator=(const Peon &Peon);
	std::string getname() const;
	void		getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, const Peon &peon);

#endif
