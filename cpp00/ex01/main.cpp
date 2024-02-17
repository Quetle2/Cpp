/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:02:46 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/17 14:21:58 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	Book;
	std::string input = "";
	std::cout << "--Welcome to your PhoneBook--" << std::endl << std::endl << "ADD : Add a new contact" << std::endl << "SEARCH : See a list of your contacts" << std::endl << "EXIT : BURN IT ALL" << std::endl << std::endl;
	std::cout << "-->" << std::flush;
	std::getline(std::cin, input);
	while (input.compare("EXIT"))
	{
		if (input.compare("ADD") == 0 && !input.empty())
			Book.addContato();
		else if (input.compare("SEARCH") == 0 && !input.empty())
			Book.viewContacts();
		else
			std::cout << "Command not found" << std::endl;
		std::cin.clear();
		std::cout << std::endl << "-->" << std::flush;
		std::getline(std::cin, input);
	}
}
