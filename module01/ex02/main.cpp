/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:29:03 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 16:29:03 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void) {
	ZombieEvent	event("Thriller");
	Zombie *Steve = event.newZombie("Zomb the Bomb");

	Steve->announce();
	delete Steve;
	for (int i = 0; i < 8; i++) {
		if (i == 3) {
			event.setZombieType("Smooth Criminal");
		}
		event.randomChump();
	}
	return (0);
}
