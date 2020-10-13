#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->_fixed_p = 0;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(fixed.getRawBits());
}

Fixed::Fixed(const int n)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_fixed_p = n << this->_n_bit;
}

Fixed::Fixed(const float n)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_fixed_p = roundf(n * (1 << this->_n_bit));
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	// std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(fixed.getRawBits());
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed &f2) const
{
	if (this->toFloat() > f2.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator<(const Fixed &f2) const
{
	if (this->toFloat() < f2.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(const Fixed &f2) const
{
	if (this->toFloat() >= f2.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(const Fixed &f2) const
{
	if (this->toFloat() <= f2.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator==(const Fixed &f2) const
{
	if (this->toFloat() == f2.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(const Fixed &f2) const
{
	if (this->toFloat() != f2.toFloat())
		return (true);
	else
		return (false);
}

Fixed Fixed::operator+(const Fixed &f2) const
{
	Fixed f1;

	f1.setRawBits(this->getRawBits() + f2.getRawBits());
	return (f1);
}

Fixed Fixed::operator-(const Fixed &f2) const
{
	Fixed f1;

	f1.setRawBits(this->getRawBits() - f2.getRawBits());
	return (f1);
}

Fixed Fixed::operator*(const Fixed &f2) const
{
	Fixed f1;

	f1.setRawBits((this->toFloat() * f2.toFloat()) * (1 << f1._n_bit));
	return (f1);
}

Fixed Fixed::operator/(const Fixed &f2) const
{
	Fixed f1;

	f1.setRawBits((this->toFloat() / f2.toFloat()) * (1 << f1._n_bit));
	return (f1);
}

Fixed &Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed Fixed::operator++(int f)
{
	Fixed f1(*this);

	(void)f;
	this->setRawBits(this->getRawBits() + 1);
	return (f1);
}

Fixed &Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed Fixed::operator--(int f)
{
	Fixed f1(*this);

	(void)f;
	this->setRawBits(this->getRawBits() - 1);
	return (f1);
}

int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_p);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_p = raw;
}

int		Fixed::toInt(void) const
{
	return ((int)(this->_fixed_p) >> this->_n_bit);
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_fixed_p) / (1 << this->_n_bit));
}

Fixed &Fixed::max(Fixed &a, Fixed &b) { return (a > b ? a : b); };

const Fixed &Fixed::max(Fixed const &a, Fixed const &b) { return (a > b ? a : b); };

Fixed &Fixed::min(Fixed &a, Fixed &b) { return (a < b ? a : b); };

const Fixed &Fixed::min(Fixed const &a, Fixed const &b) { return (a < b ? a : b); };

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}
