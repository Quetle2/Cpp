/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 04:10:33 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/18 12:13:40 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" ) {
    std::cout << this->_type << " constructor called" << std::endl;
}

Dog::~Dog( void ) {
    std::cout << this->_type << " destructor called" << std::endl;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Woof!" << std::endl;
}