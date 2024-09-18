/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:54:32 by juan              #+#    #+#             */
/*   Updated: 2024/07/28 13:46:03 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("AForm"), signedFlag(false), signGrade(150), execGrade(150)
{}

AForm::AForm(std::string name, int signGrade, int execGrade): name(name), signedFlag(false), signGrade(signGrade), execGrade(execGrade)
{}

AForm::AForm(AForm &copy): name(copy.getName()), signedFlag(copy.getSigned()), signGrade(copy.getSignGrade()), execGrade(copy.getExecGrade())
{}

AForm::~AForm()
{}

AForm &AForm::operator=(AForm &copy)
{
	this->signedFlag = copy.getSigned();
	return *this;
}

std::string AForm::getName() const
{
	return this->name;
}

bool AForm::getSigned() const
{
	return this->signedFlag;
}

int AForm::getSignGrade() const
{
	return this->signGrade;
}

int AForm::getExecGrade() const
{
	return this->execGrade;
}

void AForm::beSigned(Bureaucrat &signer)
{
	try
	{
		if (signer.getGrade() > this->signGrade)
			throw GradeTooLowException();
		else
			this->signedFlag = true;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}


const char *AForm::GradeTooHighException::what() const throw()
{
	return "<GradeTooHighException>: The grade is too high";
}


const char *AForm::GradeTooLowException::what() const throw()
{
	return "<GradeTooLowException>: The grade is too low";
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return "<FormNotSignedException>: The form isn't signed";
}

std::ostream &	operator<<(std::ostream & os, AForm const & aform)
{
	os << "AForm " << aform.getName() << " is ";
	if (aform.getSigned())
		os << "signed";
	else
		os << "not signed";
	os << " and requires grade " << aform.getSignGrade() << " to be signed and grade " << aform.getExecGrade() << " to be executed." << std::endl;
	return os;
}