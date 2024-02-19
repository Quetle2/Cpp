/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 04:10:19 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/18 23:10:43 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	private:
		Brain   *_brain;

	public:
		Cat( void );
		~Cat( void );

		Cat( const Cat& src );
		Cat& operator=( const Cat& src );

		void   makeSound( void ) const;
};

#endif