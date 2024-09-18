/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationAForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:56:25 by juan              #+#    #+#             */
/*   Updated: 2024/07/28 14:56:26 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = "Target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy): AForm(copy)
{
	this->target = copy.getTarget();
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::setTarget(std::string target)
{
	this->target = target;
}

std::string ShrubberyCreationForm::getTarget()
{
	return this->target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (!this->getSigned())
			throw AForm::FormNotSignedException();
		if (executor.getGrade() < this->getExecGrade())
			throw AForm::GradeTooLowException();
		std::ofstream archive(this->target + "_shruberry");

		if (!archive)
		{
			std::cerr << "No se pudo crear el archivo: " << this->target + "_shruberry" << std::endl;
			return;
		}

		archive << "       *       \n";
		archive << "      ***      \n";
		archive << "     *****     \n";
		archive << "    *******    \n";
		archive << "   *********   \n";
		archive << "  ***********  \n";
		archive << " ************* \n";
		archive << "      |||      \n";

	archive.close();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}