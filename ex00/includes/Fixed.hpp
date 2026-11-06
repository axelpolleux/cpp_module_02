#pragma once

class Fixed
{
private:
	int					_raw_bits;
	static int const	_fractional_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
