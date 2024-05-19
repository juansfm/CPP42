/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:12:18 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/16 19:04:09 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

float	ft_pow(float base, float exp)
{
	float	pow;

	pow = 1;
	for (int i = 0; i < exp; i++)
		pow *= base;
	return (pow);
}

Fixed::Fixed()
{
	this->rawBits = 0;
}

Fixed::Fixed(const int rawBits)
{
	this->rawBits = rawBits * ft_pow(2, this->bits);
}

Fixed::Fixed(const float rawBits)
{
	this->rawBits = roundf(rawBits * ft_pow(2, this->bits));
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	this->rawBits = fixed.getRawBits();
	return *this;
}

bool Fixed::operator==(const Fixed &fixed) const
{
	if (this->rawBits == fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	if (this->rawBits != fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	if (this->rawBits > fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	if (this->rawBits >= fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	if (this->rawBits < fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	if (this->rawBits <= fixed.getRawBits())
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed &fixed)
{
	return (this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	return (this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed)
{
	return (this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++(void)
{
	++this->rawBits;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	--this->rawBits;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temporal(*this);
	++(*this);
	return (temporal);
}

Fixed Fixed::operator--(int)
{
	Fixed temporal(*this);
	--(*this);
	return (temporal);
}

int Fixed::getRawBits(void) const
{
	return (this->rawBits);
}

void Fixed::setRawBits(const int raw)
{
	this->rawBits = raw;
}

float Fixed::toFloat(void) const
{
	float floatNum = this->rawBits;

	floatNum /= ft_pow(2, this->bits);
	return (floatNum);
}

int Fixed::toInt(void) const
{
	int intNum = this->rawBits;

	intNum /= ft_pow(2, this->bits);
	return (intNum);
}
Fixed &Fixed::min(Fixed &num1, Fixed &num2)
{
	if (num1 < num2)
		return (num1);
	return (num2);
}
const Fixed &Fixed::min(const Fixed &num1, const Fixed &num2)
{
	if (num1 < num2)
		return (num1);
	return (num2);
}
Fixed &Fixed::max(Fixed &num1, Fixed &num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}
const Fixed &Fixed::max(const Fixed &num1, const Fixed &num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}