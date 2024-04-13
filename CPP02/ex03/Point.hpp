/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:11:42 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/04/12 18:24:34 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed x;
		Fixed y;

	public:
		//constructors and destructors
		Point();
		Point(float x, float y);
		Point(Point const &point);
		~Point();	

		//operators
		Point &operator=(Point const &point);

		//getters and setters
		Fixed getX(void) const;
		Fixed getY(void) const;
		void setX(float x);
		void setY(float y);
};

#endif