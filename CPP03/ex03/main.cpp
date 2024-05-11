/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:03:25 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/08 16:41:56 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap Paquito("Paquito");
	DiamondTrap Pepe;
	DiamondTrap Pepito = Pepe;

	std::cout << "----------" << std::endl;
	Paquito.attack("Pepe");
	Pepe.takeDamage(30);
	Pepe.attack("Paquito");
	Paquito.takeDamage(30);
	std::cout << "----------" << std::endl;
	Paquito.beRepaired(5);
	Paquito.highFiveGuys();
	std::cout << Paquito.getEnergyPoints() << " energy points from " << Paquito. getName()<< std::endl;
	std::cout << "----------" << std::endl;
	Paquito.whoAmI();
	return (0);
}