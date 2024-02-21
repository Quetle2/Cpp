/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 04:10:42 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/21 03:45:49 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	private:
		Brain		*_brain;
	public:
		/* Constructors & Destructors */
		Dog(void);
		Dog(Dog const &copy);
		~Dog(void);

		/* Basic Operators */
		Dog const	&operator=(Dog const &copy);

		/* Getters & Setters */
		std::string const	&getType(void) const;
		Brain 				&getBrain(void) const;
		void				setType(std::string const &type);
		void				setBrain(Brain const &brain);

		/* Main Member Functions */
		void	makeSound(void) const;
};

#endif