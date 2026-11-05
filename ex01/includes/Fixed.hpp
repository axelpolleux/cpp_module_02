#pragma once

class Fixed
{
private:
	int					_raw_bits;
	static int const	_frictional_bits = 8;
public:
	Fixed(int input_value);
	Fixed(float input_value);
	Fixed(int value, int const fractionnal);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
