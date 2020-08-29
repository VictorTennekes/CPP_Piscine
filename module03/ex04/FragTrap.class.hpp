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

# include "ClapTrap.class.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(std::string name);
		~FragTrap();

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	vaulthunter_dot_exe(std::string const &target);
};

#endif
