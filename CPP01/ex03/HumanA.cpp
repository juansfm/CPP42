/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:36:53 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/02/14 13:58:35 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon), name(name)
{
}

HumanA::~HumanA()
{
}

void HumanA::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}

void HumanA::setName(std::string name)
{
	this->name = name;
}

Weapon HumanA::getWeapon(void)
{
	return (this->weapon);
}

std::string HumanA::getName(void)
{
	return (this->name);
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}