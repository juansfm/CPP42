/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:02:07 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/18 19:34:12 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &copy);
		~Intern();

		Intern &operator=(Intern const &copy);
		AForm *makeForm(std::string const &form, std::string const &target);
		class FormNotFound : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif