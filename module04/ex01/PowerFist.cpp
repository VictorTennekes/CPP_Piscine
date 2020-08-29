/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 16:37:15 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/04 16:37:15 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

void	PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
