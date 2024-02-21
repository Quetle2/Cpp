/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 04:13:50 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/21 03:52:38 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): _type("WrongCat")
{
	std::cout << "WrongCat from WrongAnimal " << WrongAnimal::_type << " created with default constructor." << std::endl;
}

WrongCat::WrongCat(std::string const &type):WrongAnimal(type), _type("WrongCat")
{
	std::cout << "WrongCat from WrongAnimal " << WrongAnimal::_type << " created." << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy): WrongAnimal(copy)
{
	*this = copy;
	std::cout << "WrongCat from WrongAnimal " << WrongAnimal::_type << " copied." << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat from WrongAnimal " << WrongAnimal::_type << " destroyed." << std::endl;
}

WrongCat const	&WrongCat::operator=(WrongCat const &copy)
{
	std::cout << "Assignment operator for WrongCat from WrongAnimal " << WrongAnimal::_type << " called." << std::endl;
	WrongAnimal::operator=(copy);
	return (*this);
}

std::string const	&WrongCat::getType(void) const
{
	return (this->_type);
}

void	WrongCat::setType(const std::string &type)
{
	this->_type = type;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat From WrongAnimal " << WrongAnimal::_type << " goes Meow!" << std::endl;
}