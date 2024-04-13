/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:01:24 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/04/11 19:53:10 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(42.42f);
	
	std::cout << "operator ++" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "a is: " << a << std::endl;
	std::cout << "++a is: " << ++a << std::endl;
	std::cout << "a is: " << a << std::endl;
	std::cout << "a++ is: " << a++ << std::endl;
	std::cout << "a is: " << a << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "operator --" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "a is: " << a << std::endl;
	std::cout << "--a is: " << --a << std::endl;
	std::cout << "a is: " << a << std::endl;
	std::cout << "a-- is: " << a-- << std::endl;
	std::cout << "a is: " << a << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "operator +" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "c is: " << c << std::endl;
	std::cout << "b is: " << b << std::endl;
	std::cout << "c + b is: " << c + b << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "operator -" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "c is: " << c << std::endl;
	std::cout << "b is: " << b << std::endl;
	std::cout << "c - b is: " << c - b << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "operator *" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "c is: " << c << std::endl;
	std::cout << "b is: " << b << std::endl;
	std::cout << "c * b is: " << c * b << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "operator /" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "c is: " << c << std::endl;
	std::cout << "b is: " << b << std::endl;
	std::cout << "c / b is: " << c / b << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "operator >" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "c is: " << c << std::endl;
	std::cout << "b is: " << b << std::endl;
	if (c > b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "operator <" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "c is: " << c << std::endl;
	std::cout << "b is: " << b << std::endl;
	if (c < b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "operator >=" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "c is: " << c << std::endl;
	std::cout << "b is: " << b << std::endl;
	if (c >= b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "operator <=" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "c is: " << c << std::endl;
	std::cout << "b is: " << b << std::endl;
	if (c <= b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "operator ==" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "c is: " << c << std::endl;
	std::cout << "b is: " << b << std::endl;
	if (c == b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "operator !=" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "c is: " << c << std::endl;
	std::cout << "b is: " << b << std::endl;
	if (c != b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "operator max" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "c is: " << c << std::endl;
	std::cout << "b is: " << b << std::endl;
	std::cout << "max(c, b) is: " << Fixed::max(c, b) << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "operator min" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "c is: " << c << std::endl;
	std::cout << "b is: " << b << std::endl;
	std::cout << "min(c, b) is: " << Fixed::min(c, b) << std::endl;
	std::cout << "---------------------" << std::endl;

	return (0);
}