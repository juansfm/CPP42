/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:51:07 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/22 19:48:51 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private:
		T *array;
		unsigned int length;
	public:
		Array()
		{
			this->array = new T[0];
			this->length = 0;
		}
		Array(int n)
		{
			this->array = new T[n];
			this->length = n;
		}
		Array(Array<T> &copy)
		{
			this->array = new T[copy.size()];
			for (unsigned int i = 0; i < copy.size(); i++)
				this->array[i] = copy[i];
			this->length = copy.size();
		}

		~Array()
		{
			delete[] this->array;
		}

		Array<T> &operator=(Array<T> &copy)
		{
			this->array = new T[copy.size()];
			for (int i; i < copy.size(); i++)
				this->array[i] = copy[i];
			this->length = copy.size();
			return *this;
		}

		T &operator[](unsigned int i)
		{
			if (i >= this->length)
				throw std::out_of_range("Index out of bounds");
			return this->array[i];
		}

		unsigned int size()
		{
			return this->length;
		}
};

#endif