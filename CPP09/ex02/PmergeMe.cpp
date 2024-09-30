/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:25:16 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/30 15:20:49 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{}

PmergeMe::PmergeMe(PmergeMe const &copy)
{
	*this = copy;
}

PmergeMe::~PmergeMe()
{}

PmergeMe &PmergeMe::operator=(PmergeMe const &copy)
{
	this->vec = copy.vec;
	this->list = copy.list;

	return *this;
}

bool PmergeMe::inputNumbers(char **input)
{
	try
	{
		int i = 0;

		while (input[++i] != NULL)
		{
			std::string number(input[i]);

			for (size_t j = 0; j < number.length(); j++)
				if (!std::isdigit(number[j]))
					throw std::logic_error("Invalid arguments");
			int intInput = std::atoi(number.c_str());
			this->list.push_back(intInput);
			this->vec.push_back(intInput);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return false;
	}
	return true;
}

void PmergeMe::vecSort()
{
	for (size_t i = 0;  i + 1 < this->vec.size(); i += 2)
	{
		if (this->vec[i] > this->vec[i + 1])
			std::swap(this->vec[i], this->vec[i + 1]);
	}
	std::vector<int> sorted(this->vec.begin(), this->vec.begin() + 2);
	sorted.reserve(this->vec.size());
	for (size_t i = 2; i + 1 < this->vec.size(); i += 2)
	{
			std::vector<int> newVec(sorted.size() + 2);
			std::merge(sorted.begin(), sorted.end(), this->vec.begin() + i, this->vec.begin() + i + 2, newVec.begin());
			std::swap(sorted, newVec);
	}
	std::merge(sorted.begin(), sorted.end(), this->vec.begin() + sorted.size(), this->vec.end(), this->vec.begin());
}

void PmergeMe::listSort()
{
	std::list<int>::iterator it;
	for (it = this->list.begin(); it != this->list.end(); ++it)
	{
		std::list<int>::iterator next = ++it;
		--it;
		if (next != this->list.end())
		{
			if (*next < *it)
				std::iter_swap(it, next);
			++it;
		}
	}

	std::list<int> sorted;
	for (std::list<int>::iterator it = this->list.begin(); it != this->list.end() && std::distance(this->list.begin(), it) < 2; ++it)
		sorted.push_back(*it);
	std::list<int> newList;
	it = this->list.begin();
	std::advance(it, 2);
	while (it != list.end() && it != list.begin())
	{
		std::list<int> pair;
		pair.push_back(*it);
		std::list<int>::iterator nextIt = ++it;
		--it;
		if (nextIt != this->list.end()) {
			pair.push_back(*nextIt);
		}
		newList.clear();
		newList.merge(sorted);
		newList.merge(pair);
		sorted.swap(newList);
		std::advance(it, 2);
	}
	this->list = sorted;
}

void PmergeMe::sort()
{
	std::clock_t time;
	std::cout << "Before: ";
	::print(this->vec);
	::print(this->list);
	time = std::clock();
	this->vecSort();
	this->vecTime = std::clock() - time;
	std::cout << this->vecTime << std::endl;
	time = std::clock();
	this->listSort();
	this->listTime = std::clock() - time;
	std::cout << "After: ";
	::print(this->vec);
	::print(this->list);
	std::cout << "Time to process a range of "<< this->vec.size() << " elements with std::vector : " << this->vecTime << " us" << std::endl;
	std::cout << "Time to process a range of "<< this->list.size() << " elements with std::list : " << this->listTime << " us" << std::endl;
}