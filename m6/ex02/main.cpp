#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*> (p) != 0)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*> (p) != 0)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*> (p) != 0)
		std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p)
{
	try
	{
		(void)dynamic_cast<A&> (p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) { }
	try
	{
		(void)dynamic_cast<B&> (p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) { }
	try
	{
		(void)dynamic_cast<C&> (p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) { }
}

int main(void)
{
	A a;
	B b;
	C c;

	identify_from_pointer(&a);
	identify_from_pointer(&b);
	identify_from_pointer(&c);

	std::cout << std::endl;

	identify_from_reference(c);
	identify_from_reference(b);
	identify_from_reference(a);

	return 0;
}
