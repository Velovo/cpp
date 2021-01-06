#ifndef SCALAR_CONVERSION_HPP
# define SCALAR_CONVERSION_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>

class Scal
{
	private:
	std::string _inp;

	public:
	Scal();
	~Scal();
	Scal(std::string &inp);
	Scal(const Scal &scal);
	Scal &operator=(const Scal &scal);

	operator char(void) const;
	operator int(void) const;
	operator float(void) const;
	operator double(void) const;

	class Conversionexception : public std::exception
	{
		public:
		virtual ~Conversionexception() throw();
		virtual const char* what() const throw();
	};
};

#endif
