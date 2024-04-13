/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:11:39 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/04/12 18:36:27 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(float x, float y): x(x), y(y)
{
}

Point::Point(Point const &point)
{
	*this = point;
}

Point::~Point()
{
}

Point &Point::operator=(Point const &point)
{
	this->x = point.getX();
	this->y = point.getY();
	return *this;
}

void Point::setX(float x)
{
	this->x = x;
}

void Point::setY(float y)
{
	this->y = y;
}

Fixed Point::getX(void) const
{
	return this->x;
}

Fixed Point::getY(void) const
{
	return this->y;
}