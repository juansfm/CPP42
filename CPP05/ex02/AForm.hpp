/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:54:51 by juan              #+#    #+#             */
/*   Updated: 2024/07/29 21:21:10 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAForm_HPP
#define AAForm_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string const name;
        bool signedFlag;
        int const signGrade;
        int const execGrade;
    public:
        AForm();
        AForm(std::string name, int signGrade, int execGrade);
        AForm(AForm &copy);
        ~AForm();

        AForm &operator=(AForm &copy);
        std::string getName() const;
        bool getSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;
        void beSigned(Bureaucrat &signer);
        virtual void execute(Bureaucrat &executor) = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif