/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 04:10:42 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/18 21:37:22 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	private:
		Brain   *_brain;

	public:
		Dog( void );
		~Dog( void );

		Dog( const Dog& src );
		Dog& operator=( const Dog& src );

		void   makeSound( void ) const;
};

#endif