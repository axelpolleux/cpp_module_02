#pragma once

class Fixed
{
private:
	int					_raw_bits;
	static int const	_fractional_bits = 8;
public:
	Fixed();
	Fixed(const int input_value);
	Fixed(const float input_value);
	Fixed(const Fixed &other);
	Fixed	&operator=(const Fixed &other);
	bool	operator>(const Fixed &other);
	bool	operator<(const Fixed &other);
	bool	operator>=(const Fixed &other);
	bool	operator<=(const Fixed &other);
	bool	operator==(const Fixed &other);
	bool	operator!=(const Fixed &other);
	float	operator+(const Fixed &other);
	float	operator-(const Fixed &other);
	float	operator*(const Fixed &other);
	float	operator/(const Fixed &other);
	Fixed	&operator++(void);
	Fixed	&operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);
	Fixed	&min(Fixed &first, Fixed &second);
	const Fixed	&min(const Fixed &first, const Fixed &second);
	Fixed	&max(Fixed &first, Fixed &second);
	const Fixed	&max(const Fixed &first, const Fixed &second);

	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& other);