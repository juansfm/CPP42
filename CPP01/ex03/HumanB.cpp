/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:36:59 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/02/13 17:39:23 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :weapon(NULL)
{
	this->name = name;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::setName(std::string name)
{
	this->name = name;
}

Weapon HumanB::getWeapon(void)
{
	return (*(this->weapon));
}

std::string HumanB::getName(void)
{
	return (this->name);
}

void HumanB::attack(void)
{
	if (!this->weapon)
		std::cout << this->name << " attacks with their firsts" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}