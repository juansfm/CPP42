/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonAForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:56:08 by juan              #+#    #+#             */
/*   Updated: 2024/07/28 14:56:09 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5)
{
	this->target = "Target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): AForm("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy): AForm(copy)
{
	this->target = copy.getTarget();
}
PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::setTarget(std::string target)
{
	this->target = target;
}

std::string PresidentialPardonForm::getTarget()
{
	return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (!this->getSigned())
			throw AForm::FormNotSignedException();
		if (executor.getGrade() > this->getExecGrade())
			throw AForm::GradeTooLowException();
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}