/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notSed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 01:59:20 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/17 04:02:43 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef notSed_HPP
#define notSed_HPP

#include <iostream>
#include <fstream>

class notSed
{
private:
    std::string _inFile;
    std::string _outFile;

public:
    notSed( std::string filename );
    ~notSed();

    void            replace( std::string s1, std::string s2);
};

#endif