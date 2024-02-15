/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:10:35 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/15 01:02:54 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{

	private:
		std::string _name;

	public:
		Zombie( std::string name );
		~Zombie();
		void    announce( void );
		Zombie* newZombie( std::string name );
		void    randomChump( std::string name );

};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif