/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 03:10:16 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/31 03:10:16 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_CPP
# define CLAPTRAP_CLASS_CPP

#include <iostream>

class ClapTrap {
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &src);
		ClapTrap &operator=(const ClapTrap &ClapTrap);
		~ClapTrap();

		std::string	getName();
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	protected:
		unsigned int	_hp;
		unsigned int	_hpMax;
		unsigned int	_energy;
		unsigned int	_energyMax;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_meleeAttack;
		unsigned int	_rangedAttack;
		unsigned int	_armor;
};

#endif
