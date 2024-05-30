/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:03:25 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/28 13:04:24 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap Paquito("Paquito");
	ScavTrap Pepe;
	ScavTrap Pepito = Pepe;

	std::cout << "----------" << std::endl;
	Paquito.attack("Pepe");
	Pepe.takeDamage(20);
	Pepe.attack("Paquito");
	Paquito.takeDamage(20);
	std::cout << "----------" << std::endl;
	Paquito.beRepaired(5);
	Paquito.guardGate();
	std::cout << Paquito.getEnergyPoints() << " energy points from " << Paquito. getName()<< std::endl;
	std::cout << "----------" << std::endl;
	return (0);
}