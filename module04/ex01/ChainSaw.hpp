/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ChainSaw.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 16:18:06 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/04 16:18:06 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAINSAW_HPP
# define CHAINSAW_HPP

# include "AWeapon.hpp"

class ChainSaw: public AWeapon {
	public:
		ChainSaw();
		
		void	attack() const;
};

#endif
