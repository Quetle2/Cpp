/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 04:11:16 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/18 12:20:24 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "WrongAnimel" ) {
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type( type ) {
    std::cout << "WrongAnimal " << this->_type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src ) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs )
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->_type = rhs._type;
    }
    return *this;
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "WrongAnimal makeSound called" << std::endl;
}

std::string    WrongAnimal::getType( void ) const
{
    return this->_type;
}