/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 14:57:39 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/30 14:57:39 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include <iostream>

class FragTrap {
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		FragTrap &operator=(const FragTrap &fragtrap);
		~FragTrap();

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const &target);

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
