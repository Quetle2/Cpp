/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:44:32 by miandrad          #+#    #+#             */
/*   Updated: 2024/01/31 11:55:44 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#	define CONTACT_HPP

#	include <iostream>
#	include <iomanip>

class Contact{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
		int			index;
	
	public:
		Contact();
		~Contact();
		void	addContatoContinua();
		void	setIndex(int i);
		void	showList(int index);
		void	showContact(int index);
		std::string	_printLen(std::string str);
		std::string	getInput();
		int			getNumber();
};

#endif