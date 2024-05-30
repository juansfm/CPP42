/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:06:17 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/26 18:39:25 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat const &cat);
		~Cat();

		Cat &operator=(Cat const &cat);
		Brain getBrain() const;
		void setBrain(Brain const &brain);
		void makeSound() const;
};

#endif