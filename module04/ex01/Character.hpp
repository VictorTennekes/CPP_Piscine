/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 17:36:30 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/04 17:36:30 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
	public:
		Character(std::string const &name);
		Character(const Character &src);
		Character &operator=(const Character &character);
		~Character();

		void	recoverAP();
		void	equip(AWeapon *weapon);
		void	attack(Enemy *target);
		std::string	const &getName() const;
		int		getAP() const;
		AWeapon	*getWeapon() const;

	private:
		Character();
		
		std::string _name;
		int			_ap;
		int			_maxAP;
		AWeapon		*_weapon;
};

std::ostream	&operator<<(std::ostream &out, const Character &character);

#endif
