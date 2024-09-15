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

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 145, 137)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string name, int signGrade, int execGrade): AForm(name, signGrade, execGrade)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy): AForm(copy)
{}
RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(Bureaucrat &executor)
{}