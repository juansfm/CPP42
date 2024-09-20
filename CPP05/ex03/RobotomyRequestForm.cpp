/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestAForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:56:18 by juan              #+#    #+#             */
/*   Updated: 2024/07/28 14:56:19 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45)
{
	this->target = "Target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy): AForm(copy)
{
	this->target = copy.getTarget();
}
RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::setTarget(std::string target)
{
	this->target = target;
}

std::string RobotomyRequestForm::getTarget()
{
	return this->target;
}
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (!this->getSigned())
			throw AForm::FormNotSignedException();
		if (executor.getGrade() > this->getExecGrade())
			throw AForm::GradeTooLowException();
		std::cout << "Making drill noises" << std::endl;

		std::srand(std::time(NULL));
		int result = std::rand() % 2;

		if (result == 1)
			std::cout << this->target << " has been robotomized successfully" << std::endl;
		else
			std::cout << "The robotomy of " << this->target << " has failed" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}