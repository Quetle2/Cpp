/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 04:13:50 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/18 12:25:50 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongCat::~WrongCat( void ) {
    std::cout << this->_type << " destructor called" << std::endl;
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "Meow!" << std::endl;
}