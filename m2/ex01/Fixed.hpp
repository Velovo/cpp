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
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
