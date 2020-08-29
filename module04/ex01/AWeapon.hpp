/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 15:55:49 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/04 15:55:49 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>

class	AWeapon {
	public:
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(const AWeapon &src);
		AWeapon	&operator=(const AWeapon &weapon);
		virtual ~AWeapon();
		
		std::string		const &getName() const;
		int				getAPCost() const;
		int				getDamage() const;
		virtual void	attack() const = 0;
	
	protected:
		std::string	_name;
		int			_apCost;
		int			_damage;

	private:
		AWeapon();
};

#endif
