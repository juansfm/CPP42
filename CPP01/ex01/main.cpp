/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:20:49 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/02/09 18:01:39 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(5, "Paco");

	for(int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde;	
}