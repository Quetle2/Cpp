/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:38:02 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/21 03:44:53 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		/* Constructors & Destructors */
		Brain(void);
		Brain(Brain const &copy);
		~Brain(void);

		/* Basic Operators */
		Brain const	&operator=(Brain const &copy);

		/* Getters & Setters */
		std::string const	&getIdea(int const &index) const;
		void				setIdea(std::string const &idea, int const &index);
};
 
#endif