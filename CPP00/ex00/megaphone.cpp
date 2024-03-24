/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:17:53 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/02/05 16:33:55 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc >= 2)
	{
		while (argv[i] != NULL)
		{
			int j = 0;
			while (argv[i][j] != '\0')
			{
				argv[i][j] = std::toupper(argv[i][j]);
				std::cout << argv[i][j];
				j++;
			}
			i++;
		}
	}
	return (0);
}