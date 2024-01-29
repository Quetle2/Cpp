/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:02:18 by miandrad          #+#    #+#             */
/*   Updated: 2024/01/29 10:29:08 by miandrad         ###   ########.fr       */
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
	bool		valid = false;
	while (valid == false){
		std::cout << ">" << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			valid = true;
		else{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Na serve isso ai, tenta denovo." << std::endl;
		}
	}
	return(input);
}

std::string	Contact::_printLen(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	Contact::addContatoContinua()
{
	std::cin.ignore();
	std::cout << "Mete ai O Nome do bacano" << std::endl;
	this->_firstName = this->getInput();
	std::cout << "E o ultimo nome?!" << std::endl;
	this->_lastName = this->getInput();
	std::cout << "E um apelido fofinho!!" << std::endl;
	this->_nickName = this->getInput();
	std::cout << "Qual era o numero dele mesmo?" << std::endl;
	this->_phoneNumber = this->getInput();
	std::cout << "Agora um segredo para chantajear o homie" << std::endl;
	this->_darkestSecret = this->getInput();
}

void	Contact::setIndex(int i)
{
	this->index = i;
}

void	Contact::showList(int index)
{
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickName.empty())
        return ;
	std::cout << "|" << std::setw(10) << index + 1 << std::flush;
	std::cout << "|" << std::setw(10) << this->_printLen(this->_firstName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_lastName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_nickName) << std::flush;
	std::cout << "|" << std::endl;
}

void	Contact::showContact(int index)
{
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickName.empty())
        return ;
	std::cout << std::endl;
	std::cout << "-->Contact " << index + 1 << " <--" << std::endl;
	std::cout << "First Name:\t" << this->_firstName << std::endl;
    std::cout << "Last Name:\t" << this->_lastName << std::endl;
    std::cout << "NickName:\t" << this->_nickName << std::endl;
	std::cout << "Phone Number:\t" << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret:\t" << this->_darkestSecret << std::endl;
	std::cout << std::endl;
}
