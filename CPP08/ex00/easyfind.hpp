/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:45:37 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/23 11:45:46 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <exception>

template<typename T>
typename T::iterator easyfind(T &container, int obj)
{
	typename T::iterator index = find(container.begin(), container.end(), obj);
	if (index == container.end())
		throw std::out_of_range("The element isn't found");
	return index;
}

#endif