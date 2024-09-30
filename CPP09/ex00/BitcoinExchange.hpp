/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:44:36 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/25 17:18:56 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

class BitcoinExchange
{
	private:
		std::map<std::string, double> bitcoinValues;
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &copy);
		~BitcoinExchange();

		BitcoinExchange &operator=(BitcoinExchange const &copy);
		void readData(std::string data);
		void inputFile(std::string input);
		double mapSearch(std::string key);
};

#endif