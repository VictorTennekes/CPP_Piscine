/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 22:22:47 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/06 22:22:47 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad {
	public:
		Squad();
		Squad(const Squad &src);
		Squad &operator=(const Squad &squad);
		~Squad();
		int	getCount() const;
		ISpaceMarine *getUnit(int num) const;
		int	push(ISpaceMarine *soldier);
	
	private:
		ISpaceMarine	**_squadArray;
		int				_count;
};

#endif
