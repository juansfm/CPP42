/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:38:25 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/23 13:38:26 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
#define Span_HPP

#include <vector>
#include <algorithm>
#include <iostream>

class Span
{
	private:
		std::vector<int> numbers;
		unsigned int N;
	public:
		Span();
		Span(unsigned int N);
		Span(Span const &copy);
		~Span();

		Span &operator=(Span const &copy);
		void addNumber(int number);
		void addRangeOfNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();
		unsigned int getN() const;
};

#endif