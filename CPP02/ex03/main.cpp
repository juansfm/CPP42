/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:03:25 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/15 18:34:53 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point a(5, 0);
	Point b(0, 5);
	Point c(0, 0);
	Point d(1.2, 1.4);

	if(bsp(a, b, c, d))
		std::cout << "The point d is inside the triangle ABC" << std::endl;
	else
		std::cout << "The point d is outside the triangle ABC" << std::endl;
	if (bsp(a, b, d, c))
		std::cout << "The point c is inside the triangle ABD" << std::endl;
	else
		std::cout << "The point c is outside the triangle ABD" << std::endl;
	return (0);
}