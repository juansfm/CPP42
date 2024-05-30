/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:03:22 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/26 18:26:44 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor called" << std::endl;
	this->type = "animal";
}

Animal::Animal(Animal const &animal)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = animal;
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &animal)
{
	std::cout << "Copy assigment Animal operator called" << std::endl;
	this->type = animal.getType();
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::setType(std::string type)
{
	this->type = type;
}
