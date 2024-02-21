/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 04:13:57 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/21 19:29:41 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define NBR_ANIMALS 4


int main(void)
{
	// Animal	test = new Animal();

	const Animal* Bisteca = new Dog();
	std::cout << std::endl;

	const Animal* Junim = new Cat();
	std::cout << std::endl;

	std::cout << "------------------- ZOO -------------------" << std::endl;
	const Animal* zoo[NBR_ANIMALS];

	std::cout << "------------------- DOGS -------------------" << std::endl;
	for (size_t i = 0; i < 2; i += 1) {
		zoo[i] = new Dog();
		std::cout << std::endl;
	}

	std::cout << "------------------- CATS -------------------" << std::endl;
	for (size_t i = 2; i < 4; i += 1) {
		zoo[i] = new Cat();
		std::cout << std::endl;
	}

	std::cout << "---------------- DELETE ZOO ---------------" << std::endl;
	for (size_t i = 0; i < NBR_ANIMALS; i += 1) {
		delete zoo[i];
	}
	std::cout << "--------------- ZOO DELETED ---------------" << std::endl;
	std::cout << std::endl;

	delete Bisteca;
	delete Junim;
}