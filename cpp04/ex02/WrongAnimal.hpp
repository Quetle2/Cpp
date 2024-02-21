/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 04:11:27 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/21 03:51:33 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		/* Constructors & Destructors */
		WrongAnimal(void);
		WrongAnimal(std::string const &type);
		WrongAnimal(WrongAnimal const &copy);
		virtual ~WrongAnimal(void);

		/* Basic Operators */
		WrongAnimal const	&operator=(WrongAnimal const &copy);

		/* Getters & Setters */
		std::string const	&getType(void) const;
		void				setType(std::string const &type);

		/* Main member functions */
		void	makeSound(void) const;
};

#endif