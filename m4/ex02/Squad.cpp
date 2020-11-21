#include "Squad.hpp"

Squad::Squad(void) : _soldier(0x0), _count(0)
{
	return ;
}

Squad::~Squad(void)
{
	t_soldier *tmp;
	t_soldier *tmp2;

	tmp = this->_soldier; 
	for (int i = 0; i < this->_count; ++i)
	{
		tmp2 = tmp->next;
		delete tmp->_marine;
		delete tmp;
		tmp = tmp2;
	}
}

Squad::Squad(const Squad &squad) : _soldier(0x0), _count(0)
{
	for (int i = 0; i < squad.getCount(); ++i)	
	{
		this->push(squad.getUnit(i)->clone());
	}
	return ;
}

Squad::Squad(const Squad *squad) : _soldier(0x0), _count(0)
{
	for (int i = 0; i < squad->getCount(); ++i)	
	{
		this->push(squad->getUnit(i)->clone());
	}
	return ;
}

Squad &Squad::operator=(const Squad &squad)
{
	{
		t_soldier *tmp;
		t_soldier *tmp2;

		tmp = this->_soldier; 
		for (int i = 0; i < this->_count; ++i)
		{
			tmp2 = tmp->next;
			delete tmp->_marine;
			delete tmp;
			tmp = tmp2;
		}
		this->_count = 0;
	}

	{
		for (int i = 0; i < squad.getCount(); ++i)	
		{
			this->push(squad.getUnit(i)->clone());
		}
	}
	return (*this);
}

int Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine* Squad::getUnit(int i) const
{
	t_soldier *tmp;

	if (i >= this->_count || this->_count == 0)
		return (NULL);
	tmp = this->_soldier;
	while (i > 0)
	{
		tmp = tmp->next;
		--i;
	}
	return (tmp->_marine);
}

int Squad::push(ISpaceMarine *soldier)
{
	t_soldier *tmp;
	t_soldier *tmp2;

	// std::cout << "yo" << std::endl;
	if (soldier == 0x0)
		return (-1);
	if (this->_count == 0)
	{
		this->_soldier = new t_soldier;
		this->_soldier->_marine = soldier;
		this->_soldier->next = NULL;
		++this->_count;
		return (this->_count);
	}
	else
		tmp = this->_soldier;
	for (int i = 0; i < this->_count; ++i)
	{
		if (soldier == this->getUnit(i - 1))
			return -1;
	}
	for (int i = 0; i + 1 < this->_count; ++i)
	{
		tmp = tmp->next;
	}
	tmp2 = new t_soldier;
	tmp2->next = NULL;
	tmp2->_marine = soldier;
	tmp->next = tmp2;
	++this->_count;
	return (this->_count);
}
