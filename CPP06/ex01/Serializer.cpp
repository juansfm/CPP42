/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:45:05 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/21 17:17:01 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{}

Serializer::Serializer(Serializer const &copy)
{
	(void)copy;
}

Serializer::~Serializer()
{}

Serializer &Serializer::operator=(Serializer const &copy)
{
	(void)copy;
	return *this;
}

uintptr_t Serializer::serialize(Data *ptr)
{
	uintptr_t serialized = reinterpret_cast<uintptr_t>(ptr);
	return serialized;
}

Data *Serializer::deserialize(uintptr_t raw)
{
	Data *deserialized = reinterpret_cast<Data *>(raw);
	return deserialized;
}