/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 16:14:27 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/31 16:14:27 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_CLASS_HPP
# define SORCERER_CLASS_HPP

# include <iostream>
# include "Victim.class.hpp"
# include "Peon.class.hpp"
# include "Gambit.class.hpp"

class Sorcerer {
	public:
		Sorcerer(std::string const &name, std::string const &title);
		Sorcerer(const Sorcerer &src);
		Sorcerer &operator=(const Sorcerer &sorcerer);
		~Sorcerer();

		std::string getName() const;
		std::string	getTitle() const;
		void		polymorph(Victim const &victim) const;

	private:
		Sorcerer();

		std::string _name;
		std::string _title;
};

std::ostream	&operator<<(std::ostream &out, const Sorcerer &sorcerer);

#endif
