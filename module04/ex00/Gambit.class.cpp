/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Gambit.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/08 14:22:23 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/08 14:22:23 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Gambit.class.hpp"

Gambit::Gambit(std::string const &name) : Victim(name) {
	std::cout << "Oi whats up you bloody wanker" << std::endl;
}

Gambit::Gambit(const Gambit &src) : Victim(src) {
	*this = src;
}

Gambit	&Gambit::operator=(const Gambit &Gambit) {
	this->_name = Gambit.getName();
	return (*this);
}

Gambit::~Gambit() {
	std::cout << "This isn't the last you'll hear of me" << std::endl;
}

void	Gambit::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a orange squid!" << std::endl;
}
