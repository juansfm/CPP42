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

#include "ShruberryCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm(): AForm("ShruberryCreationForm", 145, 137)
{}

ShruberryCreationForm::ShruberryCreationForm(std::string name, int signGrade, int execGrade): AForm(name, signGrade, execGrade)
{}

ShruberryCreationForm::ShruberryCreationForm(ShruberryCreationForm &copy): AForm(copy)
{}
ShruberryCreationForm::~ShruberryCreationForm()
{}

void ShruberryCreationForm::execute(Bureaucrat &executor)
{}