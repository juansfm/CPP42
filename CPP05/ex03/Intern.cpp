/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:02:10 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/20 19:58:36 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(Intern const &copy)
{
	(void)copy;
}

Intern::~Intern()
{}

Intern &Intern::operator=(Intern const &copy)
{
	(void)copy;
	return *this;
}

AForm *Intern::makeForm(std::string const &form, std::string const &target)
{
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 0;

	try
	{
		while (i < 3 && forms[i].compare(form))
			i++;
		AForm *finalForm = NULL;
		switch(i)
		{
			case 0:
				finalForm = new ShrubberyCreationForm(target);
				break;
			case 1:
				finalForm = new RobotomyRequestForm(target);
				break;
			case 2:
				finalForm = new PresidentialPardonForm(target);
				break;
			default:
				throw Intern::FormNotFound();
		}
		std::cout << "Intern creates " << form << std::endl;
		return finalForm;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return NULL;
	}
}

const char *Intern::FormNotFound::what() const throw()
{
	return "<FormNotFound>: The form isn't found";
}