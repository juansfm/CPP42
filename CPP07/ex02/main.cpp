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

#include "Array.hpp"
#include <iostream>

int main()
{
	try {	
		Array<int> emptyArray;

		std::cout << "Size of empty array: " << emptyArray.size() << std::endl;
		
		Array<int> intArray(5);

		for (unsigned int i = 0; i < intArray.size(); i++) {
			intArray[i] = i * 2;
		}

		for (unsigned int i = 0; i < intArray.size(); i++) {
			std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
		}

		Array<int> copiedArray = intArray;
		std::cout << "Copied Array:" << std::endl;
		for (unsigned int i = 0; i < copiedArray.size(); i++) {
			std::cout << "copiedArray[" << i << "] = " << copiedArray[i] << std::endl;
		}

		copiedArray[0] = 100;
		std::cout << "After modifying copied array:" << std::endl;
		std::cout << "Original Array: " << intArray[0] << std::endl;
		std::cout << "Copied Array: " << copiedArray[0] << std::endl;

		std::cout << intArray[10] << std::endl;

	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
