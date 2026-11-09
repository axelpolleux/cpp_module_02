#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : _raw_bits(0)
{
}

Fixed::Fixed(const int input_value) : _raw_bits(input_value * (1 << _fractional_bits))
{
}

Fixed::Fixed(const float input_value) : _raw_bits(input_value * (1 << _fractional_bits))
{
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

// operators: ex02
Fixed &Fixed::operator=(const Fixed& other)
{
	if (this != &other)
	{
		this->_raw_bits = other._raw_bits;
	}
	return *this;
}

Fixed &Fixed::operator>(const Fixed &other)
{

}

Fixed &Fixed::operator<(const Fixed &other)
{

}

Fixed &Fixed::operator>=(const Fixed &other)
{}

Fixed &Fixed::operator<=(const Fixed &other)
{}

Fixed &Fixed::operator==(const Fixed &other)
{

}
Fixed &Fixed::operator!=(const Fixed &other)
{

}
Fixed &Fixed::operator+(const Fixed &other)
{

}
Fixed &Fixed::operator-(const Fixed &other)
{

}
Fixed &Fixed::operator*(const Fixed &other)
{

}
Fixed &Fixed::operator/(const Fixed &other)
{

}

int Fixed::getRawBits(void) const
{
	return this->_raw_bits;
}

void Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_raw_bits / (float)(1 << _fractional_bits));
}

int Fixed::toInt(void) const
{
	return (int)(roundf(this->_raw_bits / (int)(1 << _fractional_bits)));
}

Fixed::~Fixed()
{
}

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
	os << (other.toFloat());
	return (os);
}
