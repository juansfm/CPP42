/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:24:49 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/30 18:35:15 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
#include <ctime>
#include <iterator>
#include "print.hpp"

class PmergeMe
{
	private:
		std::vector<int> vec;
		std::list<int> list;
		double vecTime;
		double listTime;
	public:
		PmergeMe();
		PmergeMe(PmergeMe const &copy);
		~PmergeMe();

		PmergeMe &operator=(PmergeMe const &copy);
		bool inputNumbers(char **input);
		void sort();
		void vecSort();
		void listSort();
};

#endif