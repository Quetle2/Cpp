/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 23:59:39 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/18 00:02:04 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Harl{
	private:
		void    debug( void );
		void    info( void );
		void    warning( void );
		void    error( void );

	public:
		Harl();
		~Harl();
		void    complain( std:: string level );

};

typedef void (Harl::*t_func) ( void );