/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:02:46 by miandrad          #+#    #+#             */
/*   Updated: 2024/01/24 18:09:00 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	Book;
	std::string input = "";
	std::cout << "Welcome to your PhoneBook" << std::endl << std::endl << "--Insert your poison--" << std::endl << std::endl << "ADD" << std::endl << "SEARCH" << std::endl << "EXIT" << std::endl << std::endl;
	std::cout << ">";
	std::cin >> input;
	while (input.compare("EXIT"))
	{
		if (input.compare("ADD") == 0)
			Book.addContato();
		std::cin >> input;
	}
}
