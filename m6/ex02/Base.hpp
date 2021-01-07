#ifndef BASE_HPP
# define BASE_HPP

class Base
{
	public:
	Base();
	virtual ~Base();
	Base(const Base &base);
	Base &operator=(const Base &base);
};

#endif
