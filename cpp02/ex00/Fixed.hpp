/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 01:27:08 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/20 11:35:22 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int                 _fixedPointValue;
		static const int    _fractionalBits;

	public:
		Fixed();
		Fixed( const Fixed &src );
		Fixed& operator=( const Fixed &src );
		~Fixed();

		int     getRawBits( void ) const;
		void    setRawBits( int const raw );
};

#endif