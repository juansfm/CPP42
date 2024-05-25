/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:03:25 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/25 19:19:42 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
int main()
{
	int arraySize = 10;
	const Animal *animal[arraySize];

	std::cout << "----- Create array -----" << std::endl;

	for (int i = 0; i < arraySize / 2; i++)
		animal[i] = new Dog();

	for (int i = arraySize / 2; i < arraySize; i++)
		animal[i] = new Cat();

	std::cout << "----- print sound -----" << std::endl;

	for (int i = 0; i < arraySize; i++)
		animal[i]->makeSound();

	std::cout << "----- Delete array -----" << std::endl;
	
	for (int i = 0; i < arraySize; i++)
		delete animal[i];

	std::cout << "----- Copy -----" << std::endl;
	
	const Dog *dog1;
	const Dog *dog2;

	dog1 = new Dog();
	dog2 = new Dog(*dog1);
	delete dog1;
	delete dog2;
	return (0);
}