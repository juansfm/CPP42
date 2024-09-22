/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:08:54 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/22 13:15:49 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T &a, T &b)
{
	T aux;

	aux = a;
	a = b;
	b = aux;
};

template<typename T>
T min(T &a, T &b)
{
	if (a < b)
		return a;
	return b;
};

template<typename T>
T max(T &a, T &b)
{
	if (a > b)
		return a;
	return b;
};
#endif