/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:44:39 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/30 18:28:47 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	*this = copy;
}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &copy)
{
	this->bitcoinValues = copy.bitcoinValues;
	return *this;
}

void BitcoinExchange::readData(std::string data)
{
	std::ifstream archive(data.c_str());

	if (!archive.is_open())
	{
		std::cout << "Failed opening of the archive data.csv" << std::endl;
		return ;
	}

	std::string line;
	std::getline(archive, line);

	while(std::getline(archive, line))
	{
		std::size_t pos = line.find(',');
		std::string key = line.substr(0, pos);
		double value = std::atof(line.substr(pos + 1, line.length()).c_str());

		this->bitcoinValues[key] = value;
	}
	archive.close();
}

bool isCorrectDate(std::string date)
{
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(6, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (month < 1 || month > 12)
		return false;
	if (day < 1 || day > 31)
		return false;
	if (day == 31 && month == 4 && month == 6 && month == 9 && month == 11)
		return false;
	if (day == 29 && month == 2 && year % 4 == 0)
	{
		if (year % 100 == 0 && year % 400 != 0)
			return false;
		return true;
	}
	if (day > 29 && month == 2)
		return false;
	return true;
}

int dateDiference(std::string date1, std::string date2)
{
	int year1 = std::atoi(date1.substr(0, 4).c_str());
	int month1 = std::atoi(date1.substr(6, 2).c_str());
	int day1 = std::atoi(date1.substr(8, 2).c_str());

	int year2 = std::atoi(date2.substr(0, 4).c_str());
	int month2 = std::atoi(date2.substr(6, 2).c_str());
	int day2 = std::atoi(date2.substr(8, 2).c_str());

	int totalDays1 = year1 * 365 + month1 * 30 + day1;
	int totalDays2 = year2 * 365 + month2 * 30 + day2;

	return std::abs(totalDays1 - totalDays2);
}


double BitcoinExchange::mapSearch(std::string key)
{
	std::map<std::string, double>::const_iterator lower = this->bitcoinValues.lower_bound(key);
	if (lower == this->bitcoinValues.begin())
		return -1;
	if (lower == this->bitcoinValues.end())
		return (--lower)->second;
	std::map<std::string, double>::const_iterator prev = --lower;

	lower++;
	if (!dateDiference(key, lower->first) || !dateDiference(key, prev->first))
		return this->bitcoinValues[key];
	if (dateDiference(key, lower->first) > dateDiference(key, prev->first))
		return lower->second;
	else
		return prev->second;
	return this->bitcoinValues[key];
}

void BitcoinExchange::inputFile(std::string input)
{
	std::ifstream archive(input.c_str());

	if (!archive.is_open())
	{
		std::cout << "Failed opening of the input file" << std::endl;
		return ;
	}

	std::string line;
	std::getline(archive, line);
	
	while(std::getline(archive, line))
	{
		if (line.find(" | ") == std::string::npos)
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}
		int pos = line.find(" | ");
		std::string key = line.substr(0, pos);
		double euro = std::atof(line.substr(pos + 3, line.length()).c_str());
		if (!isCorrectDate(key))
		{
			std::cout << "Error: bad date format." << std::endl;
			continue ;
		}
		if (euro < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue ;
		}
		if (euro > 1000)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue ;
		}
		double value = mapSearch(key);
		if (value == -1)
		{
			std::cout << "Error: the date is early than the first saved" << std::endl;
		}
		std::cout << key << " => " << euro << " = " << euro * value << std::endl;
	}
	archive.close();
}