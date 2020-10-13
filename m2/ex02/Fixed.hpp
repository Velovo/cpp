#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
	int					_fixed_p;
	static const int	_n_bit = 8;

	public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const int n);
	Fixed(const float n);

	Fixed &operator=(const Fixed &fixed);
	bool operator>(const Fixed &f2) const;
	bool operator<(const Fixed &f2) const;
	bool operator>=(const Fixed &f2) const;
	bool operator<=(const Fixed &f2) const;
	bool operator==(const Fixed &f2) const;
	bool operator!=(const Fixed &f2) const;
	Fixed operator+(const Fixed &f2) const;
	Fixed operator-(const Fixed &f2) const;
	Fixed operator*(const Fixed &f2) const;
	Fixed operator/(const Fixed &f2) const;
	Fixed &operator++();
	Fixed operator++(int f);
	Fixed &operator--();
	Fixed operator--(int f);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;

	static Fixed &max(Fixed &a, Fixed &b);
	const static Fixed &max(const Fixed &a, const Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
	const static Fixed &min(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
