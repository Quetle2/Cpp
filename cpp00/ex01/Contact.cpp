/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:02:18 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/17 14:26:28 by miandrad         ###   ########.fr       */
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
	while (1){
		std::cout << ">" << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			break;
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
	std::string input;

	std::cin.clear();
	std::cout << "Firstname" << std::endl;
	this->_firstName = this->getInput();
	std::cout << "Lastname" << std::endl;
	this->_lastName = this->getInput();
	std::cout << "Nickname" << std::endl;
	this->_nickName = this->getInput();
	std::cout << "Phone Number 📞" << std::endl;
	while (1)
	{
		std::getline(std::cin, input);
		// std::cin >> input;
		if (!std::cin.good() || input.empty() || input.find_first_not_of("0123456789") != std::string::npos) 
		{
			std::cin.clear();
			std::cout << "Phone number must be fully composed by numbers" << std::endl;
			continue;
		}
		this->_phoneNumber = input;
		std::cin.clear();
		break;
	}
	std::cout << "Darkest secret 💀" << std::endl;
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
