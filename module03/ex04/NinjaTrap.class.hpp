/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 03:51:25 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/31 03:51:25 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_CLASS_HPP
# define NINJATRAP_CLASS_HPP

# include "ClapTrap.class.hpp"
# include "FragTrap.class.hpp"
# include "ScavTrap.class.hpp"

class NinjaTrap : virtual public ClapTrap {
	public:
		NinjaTrap(std::string name);
		~NinjaTrap();

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	ninjaShoeBox(NinjaTrap &claptrap);
		void	ninjaShoeBox(FragTrap &claptrap);
		void	ninjaShoeBox(ScavTrap &claptrap);
};

#endif
