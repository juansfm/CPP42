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

#include "easyfind.hpp"

int main() {
	try {
		std::vector<int> vec;
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(5);
		std::cout << "Searching number 3 in the vector: ";
		std::vector<int>::iterator it = easyfind(vec, 3);
		std::cout << "Found: " << *it << std::endl;

		std::list<int> lst;
		lst.push_back(10);
		lst.push_back(20);
		lst.push_back(30);
		lst.push_back(40);
		lst.push_back(50);

		std::cout << "Searching number 30 in the list: ";
		std::list<int>::iterator lit = easyfind(lst, 30);
		std::cout << "Found: " << *lit << std::endl;

		std::cout << "Searching number 100 in the list: ";
		lit = easyfind(lst, 100);
		std::cout << "Found: " << *lit << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}