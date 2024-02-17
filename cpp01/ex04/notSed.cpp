/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notSed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 04:04:16 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/17 05:20:03 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notSed.hpp"

notSed::notSed(std::string filename) : _inFile(filename){
    this->_outFile = this->_inFile + ".replace";
}

notSed::~notSed ( void ) {

}

void            notSed::replace( std::string toFind, std::string replace) {
    std::ifstream   ifs(this->_inFile);
    if (ifs.is_open()) {
        std::string content;
        if (std::getline(ifs, content, '\0')) {
            std::ofstream   ofs(this->_outFile);
            size_t          pos = content.find(toFind);
            while ( pos != std::string::npos ) {
                content.erase(pos, toFind.length());
                content.insert(pos, replace);
                pos = content.find(toFind);
            }
            ofs << content;
            ofs.close();
        }
        else {
            std::cerr << "Empty file found." << std::endl;
        }
        ifs.close();
    } else {
        std::cerr << "Unable to open the file." << std::endl;
        exit(EXIT_FAILURE);
    }
}