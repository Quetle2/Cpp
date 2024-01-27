/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:37:22 by miandrad          #+#    #+#             */
/*   Updated: 2024/01/27 21:36:47 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#	define PHONEBOOK_HPP

#	include "Contact.hpp"
#	include <limits>

class PhoneBook{
	private:
		Contact _contacts[8];

	public:
		PhoneBook();
		~PhoneBook();
		int		getNumber();
		void	addContato();
		void	viewContacts();
		void	search();
};

#endif