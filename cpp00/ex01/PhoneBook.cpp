/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:24:26 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/17 14:29:40 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

int		PhoneBook::getNumber()
{
	int		input = 0;
	bool	valid = false;
	while (valid == false){
		std::cout << std::endl;
		std::cout << "Index number:  " << std::flush;
		std::cin >> input;
		if (std::cin.good() && (input > 0 && input <= 8))
			valid = true;
		else{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cout << "Must be a number between 1 and 8" << std::endl;
		}
	}
	std::cin.clear();
	std::cin.ignore();
	return (input);
}

void	PhoneBook::addContato()
{
	static int i;
	this->_contacts[i % 8].addContatoContinua();
	this->_contacts[i % 8].setIndex(i);
	i++;
}

void	PhoneBook::viewContacts()
{
	std::cout << "----Your Contacts----" << std::endl;
	for (int i = 0; i < 8; i++){
		this->_contacts[i].showList(i);
	}
	this->search();
}

void	PhoneBook::search()
{
	int	i = this->getNumber() - 1;
	this->_contacts[i].showContact(i);
}