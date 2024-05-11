/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:03:25 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/04/23 17:53:45 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Paquito("Paquito");
	ClapTrap Pepe;
	ClapTrap Pepito = Pepe;

	std::cout << "----------" << std::endl;
	Pepe.attack("Paquito");
	Paquito.takeDamage(0);
	std::cout << "----------" << std::endl;
	Paquito.attack("Pepe");
	Pepe.takeDamage(0);
	std::cout << "----------" << std::endl;
	Paquito.beRepaired(5);
	std::cout << Paquito.getEnergyPoints() << " energy points from " << Paquito. getName()<< std::endl;
	std::cout << "----------" << std::endl;
	return (0);
}