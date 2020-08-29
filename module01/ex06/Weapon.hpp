/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 19:23:14 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 19:23:14 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	public:
		Weapon(std::string weaponType);
		~Weapon();

		std::string getType() const;
		void		setType(std::string weaponType);

		private:
			std::string _type;
};

#endif
