#include "MateriaSource.hpp"
	
MateriaSource::MateriaSource()
{
	for (int i = 0; i < INV_SIZE; ++i)
		this->_inv[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < INV_SIZE; ++i)
	{
		if (this->_inv[i] != NULL)
			delete this->_inv[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &materiasource)
{
	for (int i = 0; i < INV_SIZE; ++i)
		this->_inv[i] = materiasource._inv[i] == NULL ? NULL : materiasource._inv[i]->clone();
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiasource)
{
	{
		for (int i = 0; i < INV_SIZE; ++i)
		{
			if (this->_inv[i] != NULL)
				delete this->_inv[i];
		}
	}

	{
		for (int i = 0; i < INV_SIZE; ++i)
			this->_inv[i] = materiasource._inv[i] == NULL ? NULL : materiasource._inv[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < INV_SIZE; ++i)
	{
		if (this->_inv[i] == NULL)
		{
			this->_inv[i] = m;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < INV_SIZE; ++i)
	{
		if (this->_inv[i] != NULL && type == this->_inv[i]->getType())
			return (this->_inv[i]->clone());
	}
	return (NULL);
}
