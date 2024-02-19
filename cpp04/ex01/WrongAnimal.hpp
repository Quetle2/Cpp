/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 04:11:27 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/18 12:16:05 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
	protected:
		std::string _type;

	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		~WrongAnimal( void );

		WrongAnimal( const WrongAnimal& src );
		WrongAnimal& operator=( const WrongAnimal& rhs );

		void            makeSound( void ) const;
		std::string     getType( void ) const; 
};

#endif