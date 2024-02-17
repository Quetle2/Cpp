/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 01:28:58 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/17 04:06:36 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notSed.hpp"

int main ( int ac, char **av )
{
    if (ac != 4) {
        std::cerr << "Usage: ./notSed <filename> <to_find> <replace>." << std::endl;
        return EXIT_FAILURE;
    } else {
        notSed   sed2(av[1]);
        sed2.replace(av[2], av[3]);
    }
    return EXIT_SUCCESS;
}