/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 04:10:12 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/16 04:23:53 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon*     _weapon;

public:
    HumanB( std::string name );
    ~HumanB();

    void    attack( void ) const;
    void    setWeapon( Weapon& weapon );
};