/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:06:21 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/30 16:06:53 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const &dog): Animal(dog)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	this->brain = new Brain(*dog.brain);
	this->type = dog.getType();
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor called" << std::endl;
	delete this->brain;
}

Dog &Dog::operator=(Dog const &dog)
{
	std::cout << "Copy assigment Dog operator called" << std::endl;
	if (this != &dog)
	{
		delete this->brain;
		this->brain = new Brain(*dog.brain);
		this->type = dog.getType();
	}
	return (*this);
}

Brain Dog::getBrain() const
{
	return *this->brain;
}

void Dog::setBrain(Brain const &brain)
{
	*this->brain = brain;
}

void Dog::makeSound() const
{
	std::cout << "Guauuuuuuuuuuuuuuuuuu" << std::endl;
}