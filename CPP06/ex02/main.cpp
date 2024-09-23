/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:58:58 by juan              #+#    #+#             */
/*   Updated: 2024/09/21 19:04:30 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base *generate()
{
	std::srand(std::time(NULL));
	int result = std::rand() % 3;
	switch(result)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown base" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A& a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch(const std::exception&)
	{}
	try
	{
		B& b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch(const std::exception&)
	{}
	try
	{
		C& c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch(const std::exception&)
	{}
	
}

int main()
{
	Base *randomize = generate();

	identify(randomize);
	identify(*randomize);

	delete randomize;
	return 0;
}