#include "scalar_conversion.hpp"

Scal::~Scal() { };

Scal::Scal(std::string &inp) : _inp(inp) { };

Scal::Scal(const Scal &scal)
{
	*this = scal;
}

Scal &Scal::operator=(const Scal &scal)
{
	(void)scal;
	return *this;
}

Scal::operator char(void) const
{
	int c;

	try
	{
		c = std::stoi(this->_inp);
	}
	catch(const std::exception& e)
	{
		throw Scal::Conversionexception();
	}
	if (c >= 0 && c <= 127)
		return static_cast<char> (c);
	else
		throw Scal::Conversionexception();
}

Scal::operator int(void) const
{
	int i;

	try
	{
		i = std::stoi(this->_inp);
	}
	catch(const std::exception& e)
	{
		throw Scal::Conversionexception();
	}
	return static_cast<int> (i);	
}

Scal::operator float(void) const
{
	float f;

	try
	{
		f = std::stof(this->_inp);
	}
	catch(const std::exception& e)
	{
		throw Scal::Conversionexception();
	}
	return static_cast<float> (f);
}

Scal::operator double(void) const
{
	double d;

	try
	{
		d = std::stof(this->_inp);
	}
	catch(const std::exception& e)
	{
		throw Scal::Conversionexception();
	}
	return static_cast<double> (d);	
}

Scal::Conversionexception::~Conversionexception() throw() { };

const char* Scal::Conversionexception::what() const throw()
{
	return "impossible";
}
