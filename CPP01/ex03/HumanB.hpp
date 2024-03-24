/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:37:01 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/02/13 17:39:30 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
  private:
	Weapon *weapon;
	std::string name;
  public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon &weapon);
	void setName(std::string name);
	Weapon getWeapon(void);
	std::string getName(void);
	void attack();
};

#endif