/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:58:58 by juan              #+#    #+#             */
/*   Updated: 2024/09/20 19:58:07 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
		AForm *fail = someRandomIntern.makeForm("conquest world", "World");
		std::cout << fail << std::endl;
	}
	Bureaucrat  a("Jose", 1);
	Bureaucrat  b("Pepe", 72);

	ShrubberyCreationForm       fS("Josemi");
	RobotomyRequestForm         fR("Raul");
	PresidentialPardonForm      fP("Pablo");

	std::cout << "------------------" << std::endl;
	std::cout << "--- Bureaucrat ---" << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << "-----------------" << std::endl;
	std::cout << "--- Shrubbery ---" << std::endl;
	std::cout << "-----------------" << std::endl;
	std::cout << fS << std::endl;
	std::cout << "--- Execution without sign test ---" << std::endl;
	b.executeForm(fS);
	fS.execute(b);
	std::cout << std::endl;
	std::cout << "--- Sign test ---" << std::endl;
	b.signForm(fS);
	fS.beSigned(b);
	std::cout << fS << std::endl;
	std::cout << "--- Execution test ---" << std::endl;
	b.executeForm(fS);
	fS.execute(b);
	std::cout << std::endl;

	std::cout << "----------------" << std::endl;
	std::cout << "--- Robotomy ---" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << fR << std::endl;
	std::cout << "--- Execution without sign test ---" << std::endl;
	b.executeForm(fR);
	fR.execute(b);
	std::cout << std::endl;
	std::cout << "--- Sign test ---" << std::endl;
	b.signForm(fR);
	fR.beSigned(b);
	std::cout << fR << std::endl;
	a.signForm(fR);
	fR.beSigned(a);
	std::cout << fR << std::endl;
	std::cout << "--- Execution test ---" << std::endl;
	b.executeForm(fR);
	fR.execute(b);
	a.executeForm(fR);
	fR.execute(a);
	std::cout << std::endl;
		
	std::cout << "--------------------" << std::endl;
	std::cout << "--- Presidential ---" << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << fP << std::endl;
	std::cout << "--- Execution without sign test ---" << std::endl;
	b.executeForm(fP);
	fP.execute(b);
	std::cout << std::endl;
	std::cout << "--- Sign test ---" << std::endl;
	b.signForm(fP);
	fP.beSigned(b);
	std::cout << fP << std::endl;
	a.signForm(fP);
	fP.beSigned(a);
	std::cout << fP << std::endl;
	std::cout << "--- Execution test ---" << std::endl;
	b.executeForm(fP);
	fP.execute(b);
	a.executeForm(fP);
	fP.execute(a);
	std::cout << std::endl;
	//AForm z;
	return(0);
}