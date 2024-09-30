/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:41:51 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/26 16:04:00 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	RPN rpn;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 0;
	}

	int error = rpn.readExpression(argv[1]);
	switch(error)
	{
		case 1:
			std::cerr << "Error: Wrong characters" << std::endl;
			break;
		case 2:
			std::cerr << "Error: Numbers out of range" << std::endl;
			break;
		case 3:
			std::cerr << "Error: Numbers and operator must be separated by spaces" << std::endl;
			break;
		case 4:
			std::cerr << "Error: Too few numbers to operate" << std::endl;
			break;
		case 5:
			std::cerr << "Error: Division by zero" << std::endl;
			break;
		case 6:
			std::cerr << "Error: Too few operators" << std::endl;
			break;
	}

	return 0;
}