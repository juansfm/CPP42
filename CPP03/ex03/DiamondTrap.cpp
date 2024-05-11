/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:27:02 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/02 18:39:37 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->name = "diamondtrap";
	ClapTrap::name = this->name + "_clap_name";
	std::cout << ClapTrap::name << std::endl;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "Parameter DiamondTrap constructor called" << std::endl;
	this->name = name;
	ClapTrap::name = this->name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap &diamondTrap)
{
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	*this = diamondTrap;	
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Default DiamondTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &diamondTrap)
{
	this->name = diamondTrap.getName();
	this->hitPoints = diamondTrap.getHitPoints();
	this->energyPoints = diamondTrap.getEnergyPoints();
	this->attackDamage = diamondTrap.getAttackDamage();
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Who am I?" << std::endl;
	std::cout << this->name << std::endl;
	std::cout << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string &name)
{
	ScavTrap::attack(name);
}