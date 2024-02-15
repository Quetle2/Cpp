/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 00:53:26 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/15 01:14:20 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 4

int main( void ) {
    Zombie *zombies = zombieHorde(N, "zombi");

    for (size_t i = 0; i < N; i++) {
        zombies[i].announce();
    }

    delete [] zombies;
    return 0;
}