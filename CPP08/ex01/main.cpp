/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:41:51 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/22 19:54:52 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

		Span largeSpan = Span(10000);

		std::vector<int> numbers;
		for (unsigned int i = 0; i < 10000; ++i) {
			numbers.push_back(i);
		}

		largeSpan.addRangeOfNumbers(numbers.begin(), numbers.end());

		std::cout << "Shortest Span (large): " << largeSpan.shortestSpan() << std::endl;
		std::cout << "Longest Span (large): " << largeSpan.longestSpan() << std::endl;

	} catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
