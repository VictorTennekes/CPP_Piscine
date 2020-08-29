/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 17:56:42 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 17:56:42 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _numZombies(n) {
	std::string names[] = {
		"Steve",
		"Carl",
		"George",
		"Josh",
		"Felix",
		"Villy",
		"Jacob",
		"John",
		"Dakota",
		"Jennifer",
	};
	std::string types[] = {
		"Nerd",
		"Gamergrill",
		"E-Boy",
		"Extra"
	};
	ZombieHorde::_zombies = new Zombie[n];
	for (int i = 0; i < n; i++) {
		ZombieHorde::_zombies[i].setName(names[std::rand() % 10]);
		ZombieHorde::_zombies[i].setType(types[std::rand() % 4]);
	}
}
ZombieHorde::~ZombieHorde(){
	delete [] ZombieHorde::_zombies;
}

void	ZombieHorde::announce() {
	for (int i = 0; i < ZombieHorde::_numZombies; i++) {
		ZombieHorde::_zombies[i].announce();
	}
}
