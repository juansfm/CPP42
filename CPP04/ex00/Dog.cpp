/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:06:21 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/30 16:08:17 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "dog";
}

Dog::Dog(Dog const &dog): Animal(dog)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = dog;
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &dog)
{
	std::cout << "Copy assigment Dog operator called" << std::endl;
	this->type = dog.getType();
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Guauuuuuuuuuuuuuuuuuu" << std::endl;
}