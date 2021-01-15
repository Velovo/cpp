#include "Array.hpp"

class Awesome
{
	private:
		int _n;

	public:
		Awesome() { };
		bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
		void set_value(int n) { _n = n; };
};

int main(void)
{
	try
	{
		const Array<int> a = Array<int> (2);
		std::cout << a[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Array<Awesome> test (2);

		test[0].set_value(10);
		test[1].set_value(25);

		if (test[0] < test[1])
			std::cout << "hey" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Array<int> test(20);

		test[0] = 0x41;
		std::cout << test[0] << std::endl;
		std::cout << test[19] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Array<char> test(1);

		test[0] = 0x41;
		std::cout << test[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Array<int> test = Array<int> ();
		Array<int> test2 = Array<int> (12);

		std::cout << test.size() << std::endl;
		std::cout << test2.size() << std::endl;
		test[0] = 0x41;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
