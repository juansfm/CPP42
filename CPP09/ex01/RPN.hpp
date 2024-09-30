/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:35:20 by jsaavedr          #+#    #+#             */
/*   Updated: 2024/09/26 13:32:30 by jsaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
#include <algorithm>

class RPN
{
	private:
		std::stack<int> numbers;
	public:
		RPN();
		RPN(const RPN &copy);
		~RPN();

		RPN &operator=(const RPN &copy);
		int readExpression(std::string expression);
};

#endif