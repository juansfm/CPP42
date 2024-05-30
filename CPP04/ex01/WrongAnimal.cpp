/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:40:39 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/25 19:09:41 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	this->type = "animal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &animal)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	*this = animal;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &animal)
{
	std::cout << "Copy assigment WrongAnimal operator called" << std::endl;
	this->type = animal.getType();
	return *this;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong random animal sound" << std::endl;
}