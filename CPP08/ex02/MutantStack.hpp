/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:24:57 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/23 19:56:03 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}
		~MutantStack() {}

		MutantStack &operator=(const MutantStack &copy)
		{
			if (this != &copy)
			{
				std::stack<T>::operator=(copy);
			}
			return *this;
		}

		iterator	begin()
		{
			return this->c.begin();
		}
		iterator	end()
		{
			return this->c.end();
		}
};

#endif