/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 01:44:31 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/16 04:16:23 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{

	private:
		std::string type;

	public:
		Weapon( std::string type );
		~Weapon();

		const std::string&  getType( void );
		void                setType( std::string newType );
};

#endif