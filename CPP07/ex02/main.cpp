/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:41:51 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/22 19:54:52 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
 // Asegúrate de que el nombre del archivo sea correcto.

int main()
{
	try {	
		// Crear un array vacío
		Array<int> emptyArray;

		// Comprobar el tamaño del array vacío
		std::cout << "Size of empty array: " << emptyArray.size() << std::endl;
		
		// Crear un array de 5 elementos
		Array<int> intArray(5);

		// Asignar valores a los elementos del array
		for (unsigned int i = 0; i < intArray.size(); i++) {
			intArray[i] = i * 2;  // Asigna 0, 2, 4, 6, 8
		}

		// Imprimir los valores del array
		for (unsigned int i = 0; i < intArray.size(); i++) {
			std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
		}

		// Probar el operador de copia
		Array<int> copiedArray = intArray;  // Copiar el array
		std::cout << "Copied Array:" << std::endl;
		for (unsigned int i = 0; i < copiedArray.size(); i++) {
			std::cout << "copiedArray[" << i << "] = " << copiedArray[i] << std::endl;
		}

		// Modificar el array copiado
		copiedArray[0] = 100;  // Cambiar el primer elemento
		std::cout << "After modifying copied array:" << std::endl;
		std::cout << "Original Array: " << intArray[0] << std::endl;  // Debe seguir siendo 0
		std::cout << "Copied Array: " << copiedArray[0] << std::endl;  // Debe ser 100

		// Probar acceso fuera de los límites (esto lanzará una excepción)
		std::cout << intArray[10] << std::endl;  // Lanzará std::out_of_range

	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;  // Manejo de excepciones
	}

	return 0;
}
