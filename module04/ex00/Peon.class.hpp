/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.class.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 23:37:30 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/02 23:37:30 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_CLASS_HPP
# define PEON_CLASS_HPP

# include "Victim.class.hpp"

class Peon : public Victim {
	public:
		Peon(std::string const &name);
		Peon(const Peon &src);
		Peon &operator=(const Peon &peon);
		virtual ~Peon();

		void	getPolymorphed() const;
	
	private:
		Peon();
};

#endif
