/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 14:24:22 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/07 14:24:22 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type), _xp(0) {}

AMateria::AMateria(AMateria const &src) : _type(src.getType()), _xp(src.getXP()) {}

AMateria	&AMateria::operator=(const AMateria &materia) {
	this->_type = materia._type;
	this->_xp = materia._xp;
	return (*this);
}

AMateria::~AMateria() {}

std::string const	&AMateria::getType() const {
	return (this->_type);
}

unsigned int		AMateria::getXP() const {
	return (this->_xp);
}

void		AMateria::use(ICharacter &target) {
	(void)target;
	this->_xp += 10;
}
