/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:29:46 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 16:29:46 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "A zombie has risen from a grave." << std::endl;
}

Zombie::~Zombie(){
	std::cout << Zombie::_name << " has died for real now." << std::endl;
}

void	Zombie::announce() {
	std::cout << "<" << Zombie::_name << " (" << Zombie::_type << ")> " << "Briaaaaaaannnssss..." << std::endl;
}

void	Zombie::setName(std::string name) {
	Zombie::_name = name;
}

void	Zombie::setType(std::string type) {
	Zombie::_type = type;
}
