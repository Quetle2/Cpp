/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 04:10:22 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/18 12:06:25 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {
    std::cout << this->_type << " constructor called" << std::endl;
}

Cat::~Cat( void ) {
    std::cout << this->_type << " destructor called" << std::endl;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Meow!" << std::endl;
}