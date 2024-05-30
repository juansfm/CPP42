/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:38:10 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/25 19:17:28 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{}

Brain::Brain(Brain const &brain)
{
	*this = brain;
}

Brain::~Brain()
{}

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