/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 19:05:59 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 19:05:59 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human {
	public:
		Human();
		~Human();

		Brain*	identify();
		Brain	getBrain() const;

	private:
		Brain	_brain;
};

#endif
