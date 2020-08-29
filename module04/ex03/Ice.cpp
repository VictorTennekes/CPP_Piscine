/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 14:44:06 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/07 14:44:06 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &src) : AMateria(src) {
	*this = src;
}

Ice	&Ice::operator=(const Ice &ice) {
	(void)ice;
	return (*this);
}

Ice::~Ice() {}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}

AMateria	*Ice::clone() const {
	Ice *newIce	= new (std::nothrow) Ice(*this);
	if (!newIce)
		return NULL;
	return (newIce);
}
