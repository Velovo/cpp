#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
	std::string _type;
	unsigned int _xp;

	public:
	AMateria(void);
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria &operator=(const AMateria &amateria);

	std::string const & getType() const;
	unsigned int getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
