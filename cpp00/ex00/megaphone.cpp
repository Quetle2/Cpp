/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:02:49 by miandrad          #+#    #+#             */
/*   Updated: 2023/12/04 17:14:02 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv){
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1;argv[i] && argv[0];i++)
	{
		for (int j = 0;argv[i][j];j++)
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				char a = argv[i][j] - 32;
				std::cout << a;
			}
			else{std::cout << argv[i][j];}
		}
	}
	std::cout << "\n";
}
