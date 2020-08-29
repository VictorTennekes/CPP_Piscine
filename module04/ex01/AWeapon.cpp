/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 16:05:03 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/04 16:05:03 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <string>

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apCost(apcost), _damage(damage) {}

AWeapon::AWeapon(const AWeapon &src) {
	*this = src;
}

AWeapon		&AWeapon::operator=(const AWeapon &weapon) {
	this->_name = weapon.getName();
	this->_apCost = weapon.getAPCost();
	this->_damage = weapon.getDamage();
	return (*this);
}

AWeapon::~AWeapon() {}

std::string	const &AWeapon::getName() const {
	return (this->_name);
}

int			AWeapon::getAPCost() const {
	return (this->_apCost);
}

int			AWeapon::getDamage() const {
	return (this->_damage);
}
