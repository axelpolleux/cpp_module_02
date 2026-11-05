#pragma once

class Fixed
{
private:
	int					_value;
	static int const	_fractional_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	int		getRawBits(void);
	void	setRawBits(int const raw);
};
