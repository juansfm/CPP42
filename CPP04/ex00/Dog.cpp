/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:06:21 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/08 16:38:25 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "dog";
}

Dog::Dog(Dog &Dog)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = Dog;
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog &Dog)
{
	std::cout << "Copy assigment Dog operator called" << std::endl;
	this->type = Dog.getType();
}

void Dog::makeSound()
{
	std::cout << "Guauuuuuuuuuuuuuuuuuu" << std::endl;
}