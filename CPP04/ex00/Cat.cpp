/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:06:12 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/30 16:08:32 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->type = "cat";
}

Cat::Cat(Cat const &cat): Animal(cat)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &cat)
{
	std::cout << "Copy assigment Cat operator called" << std::endl;
	this->type = cat.getType();
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miauuuuuuuuuuuuuuuuuu" << std::endl;
}