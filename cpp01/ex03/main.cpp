/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 01:44:35 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/17 17:34:47 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
		Weapon club1 = Weapon("crude spiked club");
		HumanA bob("Bob", club1);
		bob.attack();
		club1.setType("some other type of club");
		bob.attack();
		
		Weapon club2 = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club2);
		jim.attack();
		club2.setType("some other type of club");
		jim.attack();
}