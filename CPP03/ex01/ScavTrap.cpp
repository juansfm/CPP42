/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:17:43 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/01 14:03:33 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->name = "scavtrap";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Parameter ScavTrap constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &scavTrap)
{
	std::cout << "Copy ScavTrap constructor called"	<< std::endl;
	this->name = scavTrap.getName();
	this->hitPoints = scavTrap.getHitPoints();
	this->energyPoints = scavTrap.getEnergyPoints();
	this->attackDamage = scavTrap.getAttackDamage();
}

ScavTrap::~ScavTrap()
{
	std::cout << "Default ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &scavTrap)
{
	std::cout << "Copy assigment ScavTrap operator called" << std::endl;
	*this = scavTrap;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (!this->energyPoints)
	{
		std::cout << this->name << "can't attack. No energy" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

void ScavTrap::guardGate(void)
{
	std::cout << this->name << " is in gate keeper mode" << std::endl;
}