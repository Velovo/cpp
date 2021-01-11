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
	~MutantStack();
	MutantStack(const MutantStack<T> &mutantstack);
	MutantStack &operator=(const MutantStack<T> &mutantstack);

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin()
	{
		;
	}
	iterator end()
	{
		;
	}
};

#endif
