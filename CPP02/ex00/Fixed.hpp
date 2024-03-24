/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:03:14 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/03/24 19:27:06 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	rawBits;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(Fixed &fixed);
		~Fixed();
		Fixed &operator=(Fixed &fixed);
		int getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif