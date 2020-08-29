/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 15:28:28 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/07 15:28:28 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>

# include "AMateria.hpp"

class Character : public ICharacter {
	public:
		Character(std::string const &name);
		Character(Character const &src);
		Character	&operator=(Character const &character);
		~Character();

		std::string const	&getName() const;
		void				equip(AMateria *materia);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);

	private:
		Character();
		std::string _name;
		AMateria	**_spells;
		int			_spellsLearned;
};

#endif
