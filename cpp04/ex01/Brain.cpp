/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:49:04 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/18 21:12:01 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
    std::cout << "Brain created." << std::endl;
}

Brain::Brain( const Brain& src ) {
    *this = src;
}

Brain::~Brain( void ) {
    std::cout << "Brain destroyed." << std::endl;
}

Brain& Brain::operator=( const Brain& src )
{
    std::cout << "<Brain.cpp:32> Brain copy called." << std::endl;
    if ( this != &src ) {
        for ( int i = 0; i < 100; i++ ) {
            this->_ideas[i] = src._ideas[i];
        }
    }
    return *this;
}