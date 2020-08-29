/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 16:48:06 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/07 16:48:06 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		MateriaSource	&operator=(MateriaSource const &materiasource);
		~MateriaSource();

		void		learnMateria(AMateria *materia);
		AMateria	*createMateria(std::string const &type);
	
	private:
		AMateria		*_spells[4];
		unsigned int	_spellsSaved;
};

#endif
