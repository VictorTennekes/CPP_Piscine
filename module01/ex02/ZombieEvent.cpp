/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:46:58 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 16:46:58 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string event) : _eventType(event) {}
ZombieEvent::~ZombieEvent(){}

Zombie*	ZombieEvent::newZombie(std::string name) {
	Zombie *zombie = new Zombie();
	if (!zombie) return (NULL);
	zombie->setName(name);
	zombie->setType(ZombieEvent::_eventType);
	return (zombie);
}

void	ZombieEvent::setZombieType(std::string event) {
	ZombieEvent::_eventType = event;
}

void	ZombieEvent::randomChump(void) const {
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
	Zombie rando = Zombie();
	rando.setName(names[std::rand() % 10]);
	rando.setType(ZombieEvent::_eventType);
	rando.announce();
}
