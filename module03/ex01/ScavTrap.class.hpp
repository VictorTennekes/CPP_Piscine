/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 23:50:26 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/30 23:50:26 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include <iostream>

class ScavTrap {
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		ScavTrap &operator=(const ScavTrap &ScavTrap);
		~ScavTrap();

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewComer(std::string const &target);

	private:
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
