/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 14:44:06 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/07 14:44:06 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include <iostream>

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &src) : AMateria(src) {
	*this = src;
}

Cure	&Cure::operator=(const Cure &cure) {
	(void)cure;
	return (*this);
}

Cure::~Cure() {}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}

AMateria	*Cure::clone() const {
	Cure *newCure	= new (std::nothrow) Cure(*this);
	if (!newCure)
		return NULL;
	return (newCure);
}
