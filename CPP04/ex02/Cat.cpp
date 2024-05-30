/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:06:12 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/30 16:07:08 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->type = "cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &cat): Animal(cat)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	this->brain = new Brain(*cat.brain);
	this->type = cat.getType();
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called" << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(Cat const &cat)
{
	std::cout << "Copy assigment Cat operator called" << std::endl;
	if (this != &cat)
	{
		delete this->brain;
		this->brain = new Brain(*cat.brain);
		this->type = cat.getType();
	}
	return (*this);
}

Brain Cat::getBrain() const
{
	return *this->brain;	
}

void Cat::setBrain(Brain const &brain)
{
	*this->brain = brain;
}

void Cat::makeSound() const
{
	std::cout << "Miauuuuuuuuuuuuuuuuuu" << std::endl;
}