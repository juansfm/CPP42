/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:58:58 by juan              #+#    #+#             */
/*   Updated: 2024/09/21 17:53:04 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data data;

	data.name = "John";
	data.number = 27;
	std::cout << &data << std::endl;
	std::cout << "Name: " << data.name << std::endl;
	std::cout << "Number: " << data.number << std::endl;

	uintptr_t code = Serializer::serialize(&data);
	std::cout << code << std::endl;

	Data *descode = Serializer::deserialize(code);
	descode->name = "John";
	descode->number = 27;
	std::cout << &descode << std::endl;
	std::cout << "Name: " << descode->name << std::endl;
	std::cout << "Number: " << descode->number << std::endl;
	return 0;
}