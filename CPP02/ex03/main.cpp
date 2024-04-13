/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:03:25 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/04/13 16:45:26 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point a(1, 0);
	Point b(0, 1);
	Point c(0, 0);
	Point d(0.5, 0);

	if(bsp(a, b, c, d))
		std::cout << "The point d is inside the triangle" << std::endl;
	else
		std::cout << "The point d is outside the triangle" << std::endl;

	return (0);
}