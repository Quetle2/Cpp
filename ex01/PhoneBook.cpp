/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:24:26 by miandrad          #+#    #+#             */
/*   Updated: 2024/01/26 13:21:46 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContato()
{
	static int i;
	this->_contacts[i].addContatoContinua();
	this->_contacts[i].setIndex(i);
	i++;
}

void	PhoneBook::viewContacts()
{
	std::cout << "----Your Contacts----" << std::endl;
	for (int i = 0; i < 8; i++){
		this->_contacts[i].show(i);
	}
}