/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:42:11 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/04/23 13:43:17 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	addContact(PhoneBook *phonebook, int index)
{
	Contact	contact;

	std::string aux;
	while (aux.empty())
	{
		std::cout << "First name: ";
		std::getline(std::cin, aux);
	}
	contact.setFirstName(aux);
	aux.clear();
	while (aux.empty())
	{
		std::cout << "Last name: ";
		std::getline(std::cin, aux);
	}
	contact.setLastName(aux);
	aux.clear();
	while (aux.empty())
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, aux);
	}
	contact.setNickname(aux);
	aux.clear();
	while (aux.empty())
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, aux);
	}
	contact.setPhoneNumber(aux);
	aux.clear();
	while (aux.empty())
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, aux);
	}
	contact.setDarkestSecret(aux);
	phonebook->setContact(contact, index);
}

std::string tenChar(std::string str)
{
	std::string modStr;
	if (str.length() <= 10)
		return (str);
	modStr = str;
	modStr.erase(9, modStr.length());
	modStr.append(".");
	return (modStr);
}

void	displayContact(PhoneBook phonebook)
{
	int		i;
	Contact	contact;

	std::string index;
	std::cout << "ENTER AN INDEX" << std::endl;
	std::getline(std::cin, index);
	i = index[0] - '0';
	if (i < 8 && i >= 0 && !phonebook.getContact(i).getFirstName().empty()
		&& index.length() == 1)
	{
		contact = phonebook.getContact(i);
		std::cout << "First name: " << contact.getFirstName() << std::endl;
		std::cout << "Last name: " << contact.getLastName() << std::endl;
		std::cout << "Nickname: " << contact.getNickname() << std::endl;
		std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
		return ;
	}
	std::cout << "WRONG INDEX" << std::endl;
}

void	searchContact(PhoneBook phonebook)
{
	Contact	contact;

	std::cout << std::right << std::setw(10) << "index" << "|";
	std::cout << std::right << std::setw(10) << "First Name" << "|";
	std::cout << std::right << std::setw(10) << "Last Name" << "|";
	std::cout << std::right << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		contact = phonebook.getContact(i);
		std::cout << std::right << std::setw(10) << i << "|";
		std::cout << std::right << std::setw(10) << tenChar(contact.getFirstName()) << "|";
		std::cout << std::right << std::setw(10) << tenChar(contact.getLastName()) << "|";
		std::cout << std::right << std::setw(10) << tenChar(contact.getNickname()) << std::endl;
	}
	displayContact(phonebook);
}

int	main(void)
{
	std::string line;
	int i = 0;
	PhoneBook phonebook;

	std::cout << "ENTER A COMMAND" << std::endl;
	while (std::getline(std::cin, line))
	{
		if (!line.compare("ADD"))
		{
			addContact(&phonebook, i);
			i++;
			if (i >= 8)
				i = 0;
		}
		if (!line.compare("SEARCH"))
			searchContact(phonebook);
		if (!line.compare("EXIT"))
			break;
		std::cout << "ENTER A COMMAND" << std::endl;
	}
};