/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 16:14:14 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/31 16:14:14 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.class.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title) : _name(name), _title(title) {
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &src) {
	*this = src;
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &sorcerer) {
	this->_name = sorcerer.getName();
	this->_title = sorcerer.getTitle();
	return(*this);
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string		Sorcerer::getName() const {
	return (this->_name);
}

std::string		Sorcerer::getTitle() const {
	return (this->_title);
}

void			Sorcerer::polymorph(Victim const &victim) const {
	victim.getPolymorphed();
}

std::ostream	&operator<<(std::ostream &out, const Sorcerer &sorcerer) {
	out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}
