/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 00:53:38 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/15 01:03:57 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
    
	private:
		std::string _name;

	public:
		Zombie();
		~Zombie();
		void    announce( void );
		Zombie* newZombie( std::string name );
		void    setName( std::string name );

};

Zombie*    zombieHorde( int N, std::string name );

#endif