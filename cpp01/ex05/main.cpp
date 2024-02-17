/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:12:18 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/17 18:38:59 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

bool isInputValid(const std::string& input)
{
	if (input != "DEBUG" && input != "INFO"
	&& input != "WARNING" && input != "ERROR")
	{
		std::cout << "Please insert a valid level for Harl" << std::endl;
		return false;
	}
	return true;
}

int main(void)
{
	Harl harl;
	std::string input;

	while (1)
	{
		std::cout << "Enter a level for Harl: ";
		getline(std::cin, input);
		if (std::cin.eof() == true)
		{
			std::cout << std::endl;
			break;
		}
		if (input.empty() || !isInputValid(input))
			continue;
		harl.complain(input);
	}
}