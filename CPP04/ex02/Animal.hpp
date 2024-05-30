/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:05:47 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/26 18:25:44 by jsaavedr         ###   ########.fr       */
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
		Animal(Animal const &animal);
		virtual ~Animal();

		Animal &operator=(Animal const &animal);
		std::string getType() const;
		void setType(std::string type);
		virtual void makeSound() const = 0;
};

#endif