/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 04:08:47 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/18 12:07:08 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type( "Animel" ) {
    std::cout << this->_type << " constructor called" << std::endl;
}

Animal::Animal( std::string type ) : _type( type ) {
    std::cout << "Animal " << this->_type << " constructor called" << std::endl;
}

Animal::Animal( const Animal& src ) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal::~Animal( void ) {
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=( const Animal& rhs )
{
    std::cout << "Animal assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->_type = rhs._type;
    }
    return *this;
}

void Animal::makeSound( void ) const
{
    std::cout << "Animal makeSound called" << std::endl;
}

std::string    Animal::getType( void ) const
{
    return this->_type;
}