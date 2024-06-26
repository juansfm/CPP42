/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:03:25 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/28 13:04:28 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap Paquito("Paquito");
	FragTrap Pepe;
	FragTrap Pepito = Pepe;

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
	return (0);
}