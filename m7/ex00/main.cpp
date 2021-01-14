#include "whatever.hpp"
#include <iostream>

class Test1212
{
	private:
	int _n;

	public:
	Test1212(int n) : _n(n) { };
	bool operator==( Test1212 const & rhs ) { return (this->_n == rhs._n); }
	bool operator!=( Test1212 const & rhs ) { return (this->_n != rhs._n); }
	bool operator>( Test1212 const & rhs ) { return (this->_n > rhs._n); }
	bool operator<( Test1212 const & rhs ) { return (this->_n < rhs._n); }
	bool operator>=( Test1212 const & rhs ) { return (this->_n >= rhs._n); }
	bool operator<=( Test1212 const & rhs ) { return (this->_n <= rhs._n); }
	int getnbr() const { return _n; }
};

std::ostream &operator<<(std::ostream &os, const Test1212 &test1212)
{
	os << test1212.getnbr();
	return os;
}

int main(void)
{
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	std::cout << std::endl << std::endl << std::endl;
	{
		Test1212 a(2);
		Test1212 b(3);
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}

	return 0;
}
