/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 19:03:34 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/05 19:03:34 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine() : ISpaceMarine() {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src) : ISpaceMarine() {
	*this = src;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh.." << std::endl;
}

ISpaceMarine	*TacticalMarine::clone() const {
	TacticalMarine *newSoldier = new (std::nothrow) TacticalMarine(*this);
	if (!newSoldier)
		return (NULL);
	return (newSoldier);
}

void	TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
}

void	TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}
