/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:09:33 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/13 17:24:11 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie;
	Zombie *zombie2;

	zombie2 = newZombie("Nano");
	zombie.setName("Paco");
	zombie2->announce();
	zombie.announce();
	randomChump("Pepe");
	zombie2->announce();
	zombie.announce();
	delete zombie2;
}