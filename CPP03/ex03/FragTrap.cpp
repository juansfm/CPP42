/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:35:56 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/01 14:02:10 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->name = "fragtrap";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Parameter FragTrap constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(FragTrap &fragTrap)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = fragTrap;
}

FragTrap::~FragTrap()
{
	std::cout << "Default FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap &fragTrap)
{
	std::cout << "Copy assigment FragTrap operator called" << std::endl;
	this->name = fragTrap.getName();
	this->hitPoints = fragTrap.getHitPoints();
	this->energyPoints = fragTrap.getEnergyPoints();
	this->attackDamage = fragTrap.getAttackDamage();
	return (*this);
}

// void FragTrap::attack(const std::string &target)
// {
// 	if (!this->energyPoints)
// 	{
// 		std::cout << this->name << "can't attack. No energy" << std::endl;
// 		return;
// 	}
// 	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
// 	this->energyPoints--;
// }

void FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << this->name << " wants to high five with you!" << std::endl;
}