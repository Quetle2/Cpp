/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 01:32:12 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/21 03:18:51 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	protected:
		std::string	_name;
		int			_hp;
		int			_energy_points;
		int			_damage;
	public:
		/* Constructors & Destructors */
		ClapTrap(void);
		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap(void);
		
		/* Main Member Functions */
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		/* Basic Operators */
		ClapTrap	&operator=(ClapTrap const &copy);

		/* Getters & Setters */
		std::string const	&get_name(void) const;
		int const			&get_hp(void) const;
		int const			&get_energy_points(void) const;
		int const			&get_damage(void) const;
		void				set_name(std::string const &name);
		void				set_hp(int const &value);
		void				set_energy_points(int const &value);
		void				set_damage(int const &value);
};

#endif