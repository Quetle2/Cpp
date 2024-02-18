/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 23:58:57 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/17 23:59:34 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"



int main( int ac, char **av ) {

    if (ac != 2) {
		std::cout << "Usage: ./harlFilter \"level\"\n";
        return 0;
    }
    std::string input = av[1];
    Harl        harl;

    harl.complain(input);
}