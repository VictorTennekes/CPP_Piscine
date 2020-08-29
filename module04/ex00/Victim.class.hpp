/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 23:08:47 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/02 23:08:47 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_CLASS_HPP
# define VICTIM_CLASS_HPP

# include <iostream>

class Victim {
	public:
		Victim(std::string const &name);
		Victim(const Victim &src);
		Victim &operator=(const Victim &victim);
		~Victim();

		std::string	getName() const;
		virtual void		getPolymorphed() const;

	private:
		Victim();
		
	protected:
		std::string	_name;

};

std::ostream	&operator<<(std::ostream &out, const Victim &victim);

#endif
