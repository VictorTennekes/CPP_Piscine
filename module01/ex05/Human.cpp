/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 19:05:57 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 19:05:57 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {}
Human::~Human() {}

Brain	Human::getBrain() const {
	return (Human::_brain);
}

Brain*	Human::identify()  {
	return(Human::_brain.identify());
}
