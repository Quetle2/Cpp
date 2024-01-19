/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:37:22 by miandrad          #+#    #+#             */
/*   Updated: 2023/12/05 17:44:29 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#	define PHONEBOOK_HPP

#	include "Contact.hpp"

class PhoneBook{
	private:
		Contact _contacts[8];

	public:
		Phonebook();
		~PhoneBook();
};
