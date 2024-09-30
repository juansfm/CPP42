/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:38:39 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/30 18:20:51 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{}

RPN::RPN(const RPN &copy)
{
	this->numbers = copy.numbers;
}

RPN::~RPN()
{}

RPN &RPN::operator=(const RPN &copy)
{
	this->numbers = copy.numbers;
	return *this;
}

int RPN::readExpression(std::string expression)
{
	std::string validCharacters("0123456789+-*/ ");
	std::string operators("+-*/");

	for (std::size_t i = 0; i < expression.length(); i++)
		if (validCharacters.find(expression[i]) == std::string::npos)
			return 1;

	std::size_t pos = expression.find(' ');
	std::string lastPart;
	std::string line = expression.substr(0, pos);

	if (pos != std::string::npos)
		lastPart = expression.substr(pos, expression.length());
	if (!lastPart.empty())
		lastPart = lastPart.substr(lastPart.find_first_not_of(' '), lastPart.find_last_not_of(' '));
	while (!line.empty())
	{
		line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
		if (line.length() >= 2)
			if (line.find_first_of(operators) != std::string::npos)
				return 3;
		if (line.find_first_of(operators) == std::string::npos)
		{
			int number = std::atoi(line.c_str());
			if (number >= 10 || number < 0)
				return 2;
			this->numbers.push(number);
		}
		if (line.find_first_of(operators) != std::string::npos)
		{
			if (this->numbers.empty() || this->numbers.size() == 1)
				return 4;

			int op = operators.find_first_of(line);
			int factor = this->numbers.top();
			this->numbers.pop();
			switch(op)
			{
				case 0:
					this->numbers.top() += factor;
					break;
				case 1:
					this->numbers.top() -= factor;
					break;
				case 2:
					this->numbers.top() *= factor;
					break;
				case 3:
					if (factor == 0)
						return 5;
					this->numbers.top() /= factor;
					break;
			}
		}
		pos = lastPart.find(' ');
		line = lastPart.substr(0, pos);
		if (pos != std::string::npos)
			lastPart = lastPart.substr(pos, lastPart.length());
		if (!lastPart.empty())
			lastPart = lastPart.substr(lastPart.find_first_not_of(" "), lastPart.find_last_not_of(" "));
	}
	if (this->numbers.size() >= 2)
		return 6;
	std::cout << this->numbers.top() << std::endl;
	return 0;
}