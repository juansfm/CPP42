/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:56:29 by juan              #+#    #+#             */
/*   Updated: 2024/08/28 20:26:15 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include "AForm.hpp"

class ShruberryCreationForm : public AForm
{
	public:
		ShruberryCreationForm();
		ShruberryCreationForm(std::string name, int signGrade, int execGrade);
		ShruberryCreationForm(ShruberryCreationForm &copy);
		~ShruberryCreationForm();

		void execute(Bureaucrat &executor);
		
};

#endif