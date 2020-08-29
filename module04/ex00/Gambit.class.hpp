/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Gambit.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/08 14:21:56 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/08 14:21:56 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAMBIT_CLASS_HPP
# define GAMBIT_CLASS_HPP

# include "Victim.class.hpp"

class Gambit : public Victim {
	public:
		Gambit(std::string const &name);
		Gambit(const Gambit &src);
		Gambit &operator=(const Gambit &Gambit);
		virtual ~Gambit();

		void	getPolymorphed() const;
	
	private:
		Gambit();
};

#endif
