/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DemonSteve.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 17:23:44 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/04 17:23:44 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DemonSteve.hpp"
#include <iostream>

DemonSteve::DemonSteve() : Enemy(500, "DemonSteve") {
	std::cout << "* Demon Steve arises from the depths of hell *" << std::endl;
}

DemonSteve::~DemonSteve() {
	std::cout << "* Demon Steve falls back into the depths of hell *" << std::endl;
}
