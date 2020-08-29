/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 19:31:03 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 19:31:03 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}
HumanB::~HumanB() {}

void	HumanB::attack() const {
	std::cout << HumanB::_name << " attacks with his weapon " << HumanB::_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	HumanB::_weapon = &weapon;
}
