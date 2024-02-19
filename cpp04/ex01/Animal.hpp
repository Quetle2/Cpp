/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 04:08:59 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/18 21:31:26 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal{
	protected:
		std::string _type;

	public:
		Animal( void );
		Animal( std::string type );
		virtual ~Animal( void );

		Animal( const Animal& src );
		Animal& operator=( const Animal& rhs );

		virtual void    makeSound( void ) const;
		std::string     getType( void ) const; 
};

#endif