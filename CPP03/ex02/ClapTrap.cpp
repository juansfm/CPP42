/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:18:40 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/01 14:02:29 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	this->name = "claptrap";
	this->hitPoints = 10;
	this->energyPoints = 20;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
	: name(name)
{
	std::cout << "Parameter ClapTrap constructor called" << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 20;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &clapTrap)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = clapTrap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &clapTrap)
{
	std::cout << "Copy assigment ClapTrap operator called" << std::endl;
	this->name = clapTrap.getName();
	this->hitPoints = clapTrap.getHitPoints();
	this->energyPoints = clapTrap.getEnergyPoints();
	this->attackDamage = clapTrap.getAttackDamage();
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (!this->energyPoints)
	{
		std::cout << this->name << "can't attack. No energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " takes " << amount << " points of damage!" << std::endl;
	if (amount > this->hitPoints)
	{
		std::cout << this->name << " dies! :(" << std::endl;
		this->hitPoints = 0;
	}
	else
		this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->energyPoints)
	{
		std::cout << this->name << "can't be repaired. No energy" << std::endl;
		return ;
	}
	std::cout << this->name << " is repaired by " << amount << " points of health" << std::endl;
	this->hitPoints += amount;
	this->energyPoints--;
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
}

void ClapTrap::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
	this->energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
	this->attackDamage = attackDamage;
}

std::string ClapTrap::getName(void)
{
	return (this->name);
}

int ClapTrap::getHitPoints(void)
{
	return (hitPoints);
}

int ClapTrap::getEnergyPoints(void)
{
	return (energyPoints);
}

int ClapTrap::getAttackDamage(void)
{
	return (attackDamage);
}