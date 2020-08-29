/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 17:56:37 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 17:56:37 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde {
	public:
		ZombieHorde(int n);
		~ZombieHorde();

		void		announce();

	private:
		int			_numZombies;
		Zombie*		_zombies;
};

#endif
