#include "iter.hpp"
#include <iostream>
#include <string>
class Awesome
{
	private:
		int _n;

	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main(void)
{
	{
		const int tab[] = { 0, 1, 2, 3, 4 };
		const Awesome tab2[5];

		iter(tab, 5, print);
		iter(tab2, 5, print);
	}
}
