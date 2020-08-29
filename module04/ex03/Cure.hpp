/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 14:41:12 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/07 14:41:12 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE
# define CURE

# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure &src);
		Cure &operator=(const Cure &Cure);
		~Cure();
		
		void	use(ICharacter &target);
		AMateria *clone() const;
};

#endif
