/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:44:19 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/02/05 19:46:46 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{}

PhoneBook::~PhoneBook(void)
{}

Contact PhoneBook::getContact(int index)
{
	return this->Contacts[index];
}

void PhoneBook::setContact(Contact contact, int index)
{
	this->Contacts[index] = contact;
}