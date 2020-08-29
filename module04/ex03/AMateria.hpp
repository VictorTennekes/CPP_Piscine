/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 14:10:01 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/07 14:10:01 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

# include "ICharacter.hpp"

class AMateria {
	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &src);
		AMateria &operator=(const AMateria &materia);
		virtual ~AMateria();

		std::string const	&getType() const;
		unsigned int		getXP() const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);

	protected:
		std::string			_type;
		unsigned int		_xp;
};

#endif
