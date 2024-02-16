/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 04:09:39 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/16 04:21:33 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA()
{
}

void    HumanA::attack( void ) const {
    if (this->_weapon.getType() != "") {
        std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
    } else {
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
    }
}