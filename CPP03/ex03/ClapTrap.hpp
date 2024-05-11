/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:18:32 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/04/26 13:36:29 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap 
{
	protected:
		std::string name;
		int	hitPoints;
		int energyPoints;
		int attackDamage;		

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &clapTrap);
		~ClapTrap();
		
		ClapTrap &operator=(ClapTrap &clapTrap);
		
		std::string getName(void);
		int getHitPoints(void);
		int getEnergyPoints(void);
		int getAttackDamage(void);
		void setName(std::string name);
		void setHitPoints(int hitPoints);
		void setEnergyPoints(int energyPoints);
		void setAttackDamage(int attackDamage);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);		
};

#endif