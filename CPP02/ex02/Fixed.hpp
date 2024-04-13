/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:03:14 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/04/12 16:19:45 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
  private:
	int rawBits;
	static const int bits = 8;

  public:
	Fixed();
	Fixed(const int rawBits);
	Fixed(const float rawBits);
	Fixed(const Fixed &fixed);
	~Fixed();

	Fixed &operator=(const Fixed &fixed);
	bool operator==(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;
	bool operator>(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;
	Fixed operator+(const Fixed &fixed);
	Fixed operator-(const Fixed &fixed);
	Fixed operator*(const Fixed &fixed);
	Fixed operator/(const Fixed &fixed);
	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed &min(Fixed &num1, Fixed &num2);
	static const Fixed &min(const Fixed &num1, const Fixed &num2);
	static Fixed &max(Fixed &num1, Fixed &num2);
	static const Fixed &max(const Fixed &num1, const Fixed &num2);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif