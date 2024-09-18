/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:54:32 by juan              #+#    #+#             */
/*   Updated: 2024/09/17 19:39:28 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("Form"), signedFlag(false), signGrade(150), execGrade(150)
{}

Form::Form(std::string name, int signGrade, int execGrade): name(name), signedFlag(false), signGrade(signGrade), execGrade(execGrade)
{}

Form::Form(Form &copy): name(copy.getName()), signedFlag(copy.getSigned()), signGrade(copy.getSignGrade()), execGrade(copy.getExecGrade())
{}

Form::~Form()
{}

Form &Form::operator=(Form &copy)
{
	this->signedFlag = copy.getSigned();
	return *this;
}

std::string Form::getName() const
{
	return this->name;
}

bool Form::getSigned() const
{
	return this->signedFlag;
}

int Form::getSignGrade() const
{
	return this->signGrade;
}

int Form::getExecGrade() const
{
	return this->execGrade;
}

void Form::beSigned(Bureaucrat &signer)
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


const char *Form::GradeTooHighException::what() const throw()
{
	return "<GradeTooHighException>: The grade is too high";
}


const char *Form::GradeTooLowException::what() const throw()
{
	return "<GradeTooLowException>: The grade is too low";
}


std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Form " << form.getName() << " is ";
	if (form.getSigned())
		os << "signed";
	else
		os << "not signed";
	os << " and requires grade " << form.getSignGrade() << " to be signed and grade " << form.getExecGrade() << " to be executed." << std::endl;
	return os;
}