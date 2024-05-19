/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:50:16 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/05/14 16:05:44 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>


int	main(int argc, char **argv)
{
	std::string oFile(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	if (argc != 4)
	{
		std::cout << "Wrong number of parameters" << std::endl;
		return 1;
	}
	std::ifstream originalFile(oFile);
	if (!originalFile.is_open())
	{
		std::cout << "The file doesn't exist or doesn't have the permissions" << std::endl;
		return 1;
	}
	if(originalFile)
	{
		std::cout << "The file is empty" << std::endl;
		originalFile.close();
		return 1;
	}
	std::ofstream replaceFile(oFile.append(".replace"));
	if (!replaceFile.is_open())
	{
		originalFile.close();
		return 1;
	}
	std::string line;
	while (std::getline(originalFile, line))
	{
		int position = line.find(s1);
		while (position != std::string::npos)
		{
			line.erase(position, s1.length());
			line.insert(position, s2);
			position = line.find(s1);
		}
		replaceFile << line << std::endl;
	}
	originalFile.close();
	replaceFile.close();
	return 0;
}