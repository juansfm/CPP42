/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:06:12 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/08 16:37:31 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->type = "cat";
}

Cat::Cat(Cat &Cat)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = Cat;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat &Cat)
{
	std::cout << "Copy assigment Cat operator called" << std::endl;
	this->type = Cat.getType();
}

void Cat::makeSound()
{
	std::cout << "Miauuuuuuuuuuuuuuuuuu" << std::endl;
}