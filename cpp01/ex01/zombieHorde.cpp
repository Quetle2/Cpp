/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 00:54:42 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/15 01:14:05 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ) {
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombies[i].setName(name);
    }
    return zombies;
}