/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.class.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 23:37:49 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/02 23:37:49 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.class.hpp"

Peon::Peon(std::string const &name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &src) : Victim(src) {
	*this = src;
}

Peon	&Peon::operator=(const Peon &peon) {
	this->_name = peon.getName();
	return (*this);
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
