/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:24:09 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 16:24:09 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	public:
		Zombie();
		~Zombie();

		void	announce();
		void	setName(std::string name);
		void	setType(std::string type);

	private:
		std::string	_name;
		std::string	_type;
};

#endif
