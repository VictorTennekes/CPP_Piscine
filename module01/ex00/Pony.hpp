/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 14:48:25 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 14:48:25 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony {
	public:
		Pony(std::string name, std::string color, std::string element, std::string occupation);
		~Pony();

		void	DisplayPony(void);

	private:
		std::string _name;
		std::string _color;
		std::string	_element;
		std::string	_occupation;
};

#endif
