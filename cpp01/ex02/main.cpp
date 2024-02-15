/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:01:49 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/15 18:28:36 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str= "HI THIS IS BRAIN";
	std::string* stringPtr = &str;
	std::string& stringRef = str;

	std::cout << &str << std::endl;
	std::cout << stringPtr << std::endl;
	std::cout << &stringRef << std::endl;
	
	std::cout << str << std::endl;
	std::cout << *stringPtr << std::endl;
	std::cout << stringRef << std::endl;
}