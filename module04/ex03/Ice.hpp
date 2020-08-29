/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 14:41:12 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/07 14:41:12 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice &src);
		Ice &operator=(const Ice &ice);
		~Ice();
		
		void	use(ICharacter &target);
		AMateria *clone() const;
};

#endif
