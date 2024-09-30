/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:59:15 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/29 12:35:31 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
enum type_in
{
	_pseudoF,
	_pseudoD,
	_float,
	_double,
	_int,
	_char,
	_error
};

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
	(void)copy;
}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &copy)
{
	(void)copy;
	return *this;
}

bool isPseudoF(std::string const &literal)
{
	if (!literal.compare("nanf") || !literal.compare("-inff") || !literal.compare("+inff"))
		return true;
	return false;
}

bool isPseudoD(std::string const &literal)
{
	if (!literal.compare("nan") || !literal.compare("-inf") || !literal.compare("+inf"))
		return true;
	return false;
}

bool isFloat(std::string const &literal)
{
	if (literal[0] != '-' && literal[0] != '+' && !std::isdigit(literal[0]))
		return false;
	if (((literal[0] == '-' || literal[0] == '+') && !std::isdigit(literal[1])) || !literal.find('.'))
		return false;
	for (size_t i = 1; i < literal.length() - 1; i++)
		if (!std::isdigit(literal[i]) && literal[i] != '.')
			return false;
	if (literal[literal.length() - 1] != 'f')
		return false;
	return true;
}

bool isDouble(std::string const &literal)
{
	if (literal[0] != '-' && literal[0] != '+' && !std::isdigit(literal[0]))
		return false;
	if (((literal[0] == '-' || literal[0] == '+') && !std::isdigit(literal[1])) || !literal.find('.'))
		return false;
	for (size_t i = 1; i < literal.length(); i++)
		if (!std::isdigit(literal[i]) && literal[i] != '.')
			return false;
	return true;
}

bool isInt(std::string const &literal)
{
	if (literal[0] != '-' && literal[0] != '+' && !std::isdigit(literal[0]))
		return false;
	for (size_t i = 1; i < literal.length(); i++)
		if (!std::isdigit(literal[i]))
			return false;
	return true;
}

bool isChar(std::string const &literal)
{
	if (literal.length() == 1)
		return true;
	return false;
}

type_in getType(std::string const &literal)
{
	if (isPseudoF(literal))
		return _pseudoF;
	else if (isPseudoD(literal))
		return _pseudoD;
	else if (isFloat(literal))
		return _float;
	else if (isDouble(literal))
		return _double;
	else if (isInt(literal))
		return _int;
	else if (isChar(literal))
		return _char;
	return _error;
}

void convertChar(std::string const &literal)
{
	char input = literal[0];

	std::cout << "char: '" << input << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(input) << std::endl;
	std::cout << "float: " << static_cast<float>(input) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(input) << std::endl;
}

void convertInt(std::string const &literal)
{
	int input = std::atoi(literal.c_str());

	if ((input >= 0 && input < 32) || input == 127)
		std::cout << "char: non displayable" << std::endl;
	else if (input < 0 || input > 127)
		std::cout << "char: imposible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(input) << "'" << std::endl;
	std::cout << "int: " << input << std::endl;
	std::cout << "float: " << static_cast<float>(input) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(input) << std::endl;
}

void convertFloat(std::string const &literal)
{
	float input = std::atof(literal.c_str());

	if ((input >= 0 && input < 32) || input == 127)
		std::cout << "char: non displayable" << std::endl;
	else if (input < 0 || input > 127)
		std::cout << "char: imposible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(input) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(input) << std::endl;
	std::cout << "float: " << input << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(input) << std::endl;
}

void convertDouble(std::string const &literal)
{
	double input = std::atof(literal.c_str());

	if ((input >= 0 && input < 32) || input == 127)
		std::cout << "char: non displayable" << std::endl;
	else if (input < 0 || input > 127)
		std::cout << "char: imposible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(input) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(input) << std::endl;
	std::cout << "float: " << static_cast<float>(input) << "f" << std::endl;
	std::cout << "double: " << input << std::endl;
}

void convertPseudoF(std::string const &literal)
{
	float input = std::atof(literal.c_str());

	std::cout << "char: imposible" << std::endl;
	std::cout << "int: imposible" << std::endl;
	std::cout << "float: " << input << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(input) << std::endl;
}

void convertPseudoD(std::string const &literal)
{
	double input = std::atof(literal.c_str());

	std::cout << "char: imposible" << std::endl;
	std::cout << "int: imposible" << std::endl;
	std::cout << "float: " << static_cast<float>(input) << "f" << std::endl;
	std::cout << "double: " << input << std::endl;
}

void ScalarConverter::convert(const std::string &literal)
{
	type_in inType = getType(literal);
	std::cout << std::fixed << std::setprecision(1);
	switch(inType)
	{
		case _pseudoF:
			convertPseudoF(literal);
			break;
		case _pseudoD:
			convertPseudoD(literal);
			break;
		case _float:
			convertFloat(literal);
			break;
		case _double:
			convertDouble(literal);
			break;
		case _int:
			convertInt(literal);
			break;
		case _char:
			convertChar(literal);
			break;
		default:
			std::cout << "Incorrect input" << std::endl;
	}
}