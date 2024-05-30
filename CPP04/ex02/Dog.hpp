/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:19:05 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/26 18:40:38 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain *brain;

public:
	Dog();
	Dog(Dog const &dog);
	~Dog();

	Dog &operator=(Dog const &dog);
	Brain getBrain() const;
	void setBrain(Brain const &brain);
	void makeSound() const;
};

#endif