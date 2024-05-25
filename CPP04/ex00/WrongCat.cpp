/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:40:42 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/25 19:09:29 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &wrongCat)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = wrongCat;
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &wrongCat)
{
	std::cout << "Copy assigment WrongCat operator called" << std::endl;
	this->type = wrongCat.getType();
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Miauuuuuuuuuuuuuuuuuu" << std::endl;
}