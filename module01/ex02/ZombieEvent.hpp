/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:42:16 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 16:42:16 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent {
	public:
		ZombieEvent(std::string event);
		~ZombieEvent();

		Zombie*		newZombie(std::string name);
		void		setZombieType(std::string type);
		void		randomChump(void) const;

	private:
		std::string	_eventType;
};

#endif
