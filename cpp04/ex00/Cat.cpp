/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 04:10:22 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/21 18:18:57 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): _type("undefined")
{
	std::cout << "Cat " << this->_type << " created with default constructor." << std::endl;
}

Cat::Cat(std::string const &type): _type(type)
{
	std::cout << "Cat " << this->_type << " created." << std::endl;
}

Cat::Cat(const Cat &copy): Animal()
{
	*this = copy;
	std::cout << "Cat " << this->_type << " copied." << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat " << this->_type << " destroyed." << std::endl;
}

Cat const	&Cat::operator=(Cat const &copy)
{
	std::cout << "Assignment operator for Cat " << this->_type << " called." << std::endl;
	this->_type = copy.getType();
	return (*this);
}

std::string const	&Cat::getType(void) const
{
	return (this->_type);
}

void	Cat::setType(const std::string &type)
{
	this->_type = type;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat from Animal" << this->_type << " Mweo!" << std::endl;
}