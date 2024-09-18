/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:59:03 by juan              #+#    #+#             */
/*   Updated: 2024/09/17 19:39:57 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("bureaucrat"), grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		this->grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		this->grade = 150;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat &copy) : name(copy.getName()), grade(copy.getGrade())
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &copy)
{
	if (this != &copy)
		this->grade = copy.getGrade();
	return *this;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

void Bureaucrat::setGrade(int grade)
{
	this->grade = grade;
}

void Bureaucrat::incrementGrade()
{
	try
	{
		if (this->grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		this->grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void Bureaucrat::decrementGrade()
{
	try
	{
		if (this->grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		this->grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getSigned())
	{
		std::cout << this->name << " couldn't sign " << form.getName() << " because is signed" << std::endl;
		return ;
	}
	if (this->grade > form.getSignGrade())
	{
		std::cout << this->name << " couldn't sign " << form.getName() << " because his grade is too low" << std::endl;
		return ;
	}
	std::cout << this->name << " signed " << form.getName() << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "<GradeTooHighException>: The grade is too high";
}


const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "<GradeTooLowException>: The grade is too low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}