/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 04:24:37 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/31 04:24:37 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_CLASS_HPP
# define SUPERTRAP_CLASS_HPP

#include "FragTrap.class.hpp"
#include "NinjaTrap.class.hpp"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap {
	public:
		SuperTrap(std::string name);
		~SuperTrap();

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);

};

#endif
