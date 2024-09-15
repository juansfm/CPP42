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

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 145, 137)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string name, int signGrade, int execGrade): AForm(name, signGrade, execGrade)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy): AForm(copy)
{}
PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(Bureaucrat &executor)
{}