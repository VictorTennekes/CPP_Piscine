/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 19:29:40 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 19:29:40 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType) : _type(weaponType) {}
Weapon::~Weapon() {}

std::string	Weapon::getType() const {
	return(Weapon::_type);
}

void		Weapon::setType(std::string weaponType) {
	Weapon::_type = weaponType;
}
