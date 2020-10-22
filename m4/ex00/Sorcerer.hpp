#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
    private:
	std::string	_name;
	std::string _title;

	public:
	Sorcerer(const std::string &name, const std::string &title);
	~Sorcerer();
	Sorcerer(const Sorcerer &sorcerer);
	Sorcerer &operator=(const Sorcerer &sorcerer);
	std::string getname() const;
	std::string gettitle() const;
	void		polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer);

#endif
