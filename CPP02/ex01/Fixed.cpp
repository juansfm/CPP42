/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:12:18 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/15 17:51:38 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

float	ft_pow(float base, float exp)
{
	float	pow = 1;

	for (int i = 0; i<exp; i++)
		pow *= base;
	return pow;
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->rawBits = 0;
}

Fixed::Fixed(const int rawBits)
{
	std::cout << "Int constructor called" << std::endl;
	this->rawBits = rawBits * ft_pow(2, this->bits);
}

Fixed::Fixed(const float rawBits)
{
	std::cout << "Float constructor called" << std::endl;
	this->rawBits = roundf(rawBits * ft_pow(2, this->bits));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy asigment operator called" << std::endl;
	this->rawBits = fixed.getRawBits();
	return *this;
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
	return floatNum;
}

int Fixed::toInt(void) const
{
	int	intNum = this->rawBits;

	intNum /= ft_pow(2, this->bits);
	return intNum;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}