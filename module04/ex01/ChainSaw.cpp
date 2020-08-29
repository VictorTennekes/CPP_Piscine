/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ChainSaw.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 16:24:11 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/04 16:24:11 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ChainSaw.hpp"
#include <iostream>

ChainSaw::ChainSaw() : AWeapon("Chain Saw", 10, 65) {}

void	ChainSaw::attack() const {
	std::cout << "* hing hing hing hing *" << std::endl;
}
