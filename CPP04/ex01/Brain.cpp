/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:38:10 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/30 16:05:28 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &brain)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = brain;
}

Brain::~Brain()
{
	std::cout << "Default Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &brain)
{
	for (int i; i < 100; i++)
	{
		this->ideas[i] = brain.getIdeas(i);
	}
	return *this;
}

std::string Brain::getIdeas(int index) const
{
	return (this->ideas[index]);
}

void Brain::setIdeas(std::string idea, int index)
{
	this->ideas[index] = idea;
}