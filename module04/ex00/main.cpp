/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 23:32:41 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/02 23:32:41 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.class.hpp"
#include "Victim.class.hpp"
#include "Peon.class.hpp"
#include "Gambit.class.hpp"

int main() {
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Gambit steve("Steve");

	std::cout << robert << jim << joe << steve;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(steve);
	return 0;
}
