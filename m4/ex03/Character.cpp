#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; ++i)
		this->_materia[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	}
}

Character::Character(const Character &character) : _name(character.getName())
{
	for (int i = 0; i < 4; ++i)
		this->_materia[i] = character._materia[i] == NULL ? NULL : character._materia[i]->clone();
}

Character &Character::operator=(const Character &character)
{
	{
		for (int i = 0; i < 4; ++i)
		{
			if (this->_materia[i] != NULL)
				delete this->_materia[i];
		}
	}

	{
		for (int i = 0; i < 4; ++i)
			this->_materia[i] = character._materia[i] == NULL ? NULL : character._materia[i]->clone();
	}
	return (*this);
}

const std::string &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && this->_materia[idx] != NULL)
		this->_materia[idx]->use(target);
}
