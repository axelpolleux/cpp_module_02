#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_raw_bits = 0;
}

Fixed::Fixed(const int input_value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_raw_bits = input_value * (1 << _fractional_bits);
}

Fixed::Fixed(const float input_value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_raw_bits = input_value * (1 << _fractional_bits);
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_raw_bits = other._raw_bits;
	}
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw_bits;
}

void Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_raw_bits / (float)(1 << _fractional_bits));
}

int		Fixed::toInt(void) const
{
	return (int)(roundf(this->_raw_bits /(int)(1 << _fractional_bits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
	os << (other.toFloat());
	return (os);
}
