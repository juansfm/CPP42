/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:58:58 by juan              #+#    #+#             */
/*   Updated: 2024/09/29 12:14:25 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "----Correct bureaucrats----" << std::endl;
	Bureaucrat b1;
	Bureaucrat b2("Jefe", 1);

	std::cout << b1 << " and " << b2 << std::endl;

	std::cout << "----Incorrect bureaucrats----" << std::endl;
	Bureaucrat b3("Pepe", 156);
	Bureaucrat b4("Paco", -1);
	
	std::cout << "----Out of range increment and decrement" << std::endl;

	b1.decrementGrade();
	b2.incrementGrade();

	std::cout << "Goodbye" << std::endl;
}