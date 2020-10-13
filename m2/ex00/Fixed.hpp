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
	void operator=(const Fixed &fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
