/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:38:13 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/30 12:52:27 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	this->N = 0;
}

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::Span(Span const &copy)
{
	this->N = copy.getN();
	this->numbers = copy.numbers;
}

Span::~Span()
{}

Span &Span::operator=(Span const &copy)
{
	this->N = copy.getN();
	this->numbers = copy.numbers;
	return *this;
}

void Span::addNumber(int number)
{
	if (this->numbers.size() == N)
		throw std::out_of_range("the vector has the maximum number of elements");
	this->numbers.push_back(number);
}

void Span::addRangeOfNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	int distance = std::distance(begin, end);

	if (distance + this->numbers.size() > N)
		throw std::out_of_range("the total number of elements is bigger than the maximum number of allowed elements");
	this->numbers.insert(this->numbers.end(), begin, end);
}

int Span::shortestSpan()
{
	if (this->numbers.size() <= 1)
		throw std::logic_error("There aren't enough numbers");
	int shortSpan = std::abs(this->numbers[0] - this->numbers[1]);

	std::sort(this->numbers.begin(), this->numbers.end());
	for(unsigned int i = 1; i < this->numbers.size(); i++)
		if (this->numbers[i] - this->numbers[i - 1] < shortSpan)
			shortSpan = this->numbers[i] - this->numbers[i - 1];
	return shortSpan;
}

int Span::longestSpan()
{
	if (this->numbers.size() <= 1)
		throw std::logic_error("There aren't enough numbers");

	std::sort(this->numbers.begin(), this->numbers.end());
	int longSpan = std::abs(this->numbers.back() - this->numbers.front());
	
	return longSpan;
}

unsigned int Span::getN() const
{
	return this->N;
}