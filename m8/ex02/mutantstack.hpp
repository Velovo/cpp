#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>

template <class T>
class MutantStack: public std::stack<T>
{
	public:
	MutantStack() { };
	~MutantStack() { };
	MutantStack(const MutantStack<T> &mutantstack) { *this = mutantstack; };
	MutantStack &operator=(const MutantStack<T> &mutantstack) { this->c = mutantstack.c; return *this; };

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin()
	{
		return std::stack<T>::c.begin();
	}
	iterator end()
	{
		return std::stack<T>::c.end();
	}
};

#endif
