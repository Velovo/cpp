#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

# define INV_SIZE 2

class MateriaSource : public IMateriaSource
{
	public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &materiasource);
	MateriaSource &operator=(const MateriaSource &materiasource);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

	private:
	AMateria *_inv[INV_SIZE];
};

#endif
