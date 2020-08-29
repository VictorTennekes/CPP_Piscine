/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 19:31:03 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 19:31:03 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}
HumanA::~HumanA() {}

void	HumanA::attack() const {
	std::cout << HumanA::_name << " attacks with his weapon " << HumanA::_weapon.getType() << std::endl;
}
