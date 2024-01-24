/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:24:26 by miandrad          #+#    #+#             */
/*   Updated: 2024/01/24 18:24:51 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	int	i = 0;
	while (i < 8)
	{
		this->_contacts[i].setExist(false);
		i++;
	}
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContato()
{
	int i = 0;
	while (this->_contacts[i].checkExists() == true && i < 8)
	{
		i++;
	}
	if(i < 8 && this->_contacts[i].checkExists() == false)
		this->_contacts[i].addContatoContinua();
}