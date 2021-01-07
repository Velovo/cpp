#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private:
		T _array;
		unsigned int _n;

	public:
		Array(void) : _array(0), _n(0) { };
		~Array()
		{
			if (_array != 0)
				delete _array;
		}
		Array(unsigned int n) : _array( new T[n]; ), _n(n) { };
		Array(const Array &array) { *this = array; };
		Array &operator=(const Array &array)
		{
			if (this == &array)
				return (this);
			if (_array != 0)
				delete _array;
			_array = new T[array._n];
			for (int i = 0; i < array._n; ++i)
				_array[i] = array._array[i];
			_n = array._n;
			return (*this);
		}
		unsigned int len() { return _n; };
		T &operator[](unsigned int n)
		{
			if (n > _n)
				throw std::exception();
			return (_array[n]);
		}
};

#endif
