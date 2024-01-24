/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:02:18 by miandrad          #+#    #+#             */
/*   Updated: 2024/01/24 18:23:29 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::getInput()
{
	std::string input = "";
	std::cin >> input;
	return(input);
}

void	Contact::addContatoContinua()
{
	static int i = 0;
	std::cout << ":" << i << std::endl;
	std::cin.ignore();
	std::cout << "Mete ai O Nome do bacano" << std::endl << ">";
	this->_firstName = this->getInput();
	std::cout << "E o ultimo nome?!" << std::endl << ">";
	this->_lastName = this->getInput();
	std::cout << "E um apelido fofinho!!" << std::endl << ">";
	this->_nickName = this->getInput();
	std::cout << "Qual era o numero dele mesmo?" << std::endl << ">";
	this->_phoneNumber = this->getInput();
	std::cout << "Agora um segredo para chantajear o homie" << std::endl << ">";
	this->_darkestSecret = this->getInput();
	this->exist = true;
	i++;
}

void	Contact::setExist(bool exist)
{
	this->exist = exist;
}

bool	Contact::checkExists()
{
	return(this->exist);
}
