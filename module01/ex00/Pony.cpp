/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 14:48:27 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 14:48:27 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, std::string element, std::string occupation) {
	Pony::_name = name;
	Pony::_color = color;
	Pony::_element = element;
	Pony::_occupation = occupation;
}
Pony::~Pony(){
	std::cout << Pony::_name << " was absorbed by their element due to allocation..." << std::endl;
}

void	Pony::DisplayPony(void) {
	std::cout << "This pony is called: " << Pony::_name << " its color is "
		<< Pony::_color << ". their element is: " << Pony::_element
		<< " and their day to day job is being the "
		<< Pony::_occupation << "." << std::endl;
}
