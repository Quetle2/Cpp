/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 04:09:48 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/16 04:21:01 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon&     _weapon;
    HumanA();

public:
    HumanA( std::string name, Weapon& weapon );
    ~HumanA();

    void    attack( void ) const;
};