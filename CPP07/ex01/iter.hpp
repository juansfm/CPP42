/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:31:17 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/22 14:09:04 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void printElement(T &element)
{
	std::cout << element << std::endl;
}

template<typename T>
void iter(T *array, int length, void (* func)(T &))
{
	try
	{
		T element = array[length];
		(void)element;
		for (int i = 0; i < length; i++)
			func(array[i]);
	}
	catch(const std::exception &)
	{
		std::cerr << "The providen array is shorter than the providen length" << std::endl;
	}
}

#endif