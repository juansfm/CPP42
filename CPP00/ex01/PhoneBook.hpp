/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:43:02 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/02/05 19:45:56 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook{
	private:
		Contact Contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		Contact getContact(int index);
		void setContact(Contact contact, int index);	
};

#endif