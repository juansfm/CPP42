/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:05:47 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/08 17:59:48 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
	public:	
		Animal();
		Animal(Animal &animal);
		~Animal();

		Animal &operator=(Animal &animal);
		std::string getType() const;
		void setType(std::string type);
		void makeSound() const;
};

#endif