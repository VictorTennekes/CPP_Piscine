/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 23:15:08 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/02 23:15:08 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.class.hpp"

Victim::Victim(std::string const &name) : _name(name) {
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &src) {
	*this = src;
}

Victim	&Victim::operator=(const Victim &victim) {
	this->_name = victim.getName();
	return (*this);
}

Victim::~Victim() {
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::string	Victim::getName() const {
	return(this->_name);
}

void	Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a little sheep!" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Victim &victim) {
	out << "I'm " << victim.getName() << ", and I like otters!" << std::endl;
	return (out);
}
