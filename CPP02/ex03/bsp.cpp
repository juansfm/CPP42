/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:11:13 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/04/13 16:45:11 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
/*
With the point we have to check and the vertices, we can create three new triangles

If the area of one of these new triangles is zero, then the point is on one of the sides
If the sum of the areas of these new triangles is higher than the area of the original triangle, then the point is outside
If the sum of the areas of these new triangles is equal to the area of the original triangle, then the point is inside or on one of the sides
*/
Fixed	area(Point const a, Point const b, Point const c)
{
	Fixed area = (a.getX() - c.getX())*(b.getY() - a.getY()) - (a.getX() - b.getX())*(c.getY() - a.getY());
	if (area < 0)
		area = area * -1;
	area = area * Fixed(0.5f);
	return area;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	areaTriangle(area(a, b, c));
	Fixed	areaABPoint(area(a, b, point));
	Fixed	areaACPoint(area(a, c, point));
	Fixed	areaBCPoint(area(b, c, point));

	std::cout << "The triangle area is " << areaTriangle << " and the three areas of the subtriangles are " << areaABPoint << ", " << areaACPoint << ", " << areaBCPoint << std::endl;
	if(areaABPoint == 0 || areaACPoint == 0 || areaBCPoint == 0)
		return false;
	if(areaTriangle < (areaABPoint + areaACPoint + areaBCPoint))
		return false;
	return true;
}

/*
Triangle area:

area = (1/2) * |(Xa - Xc)(Yb - Ya) - (Xa - Xb)(Yc - Ya)|

vertice A = Xa, Ya
vertice B = Xb, Yb
vertice C = Xc, Yc

*/