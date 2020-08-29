/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 14:48:29 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 14:48:29 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(std::string name, std::string color, std::string element, std::string occupation) {
	Pony	RainbowDash = Pony(name, color, element, occupation);
	RainbowDash.DisplayPony();
}

void	ponyOnTheHeap(std::string name, std::string color, std::string element, std::string occupation) {
	Pony	*Applejack = new Pony(name, color, element, occupation);
	if (!Applejack) {
		std::cerr << "Failed to allocate Pony on the heap" << std::endl;
		return ; 
	}
	Applejack->DisplayPony();
	delete(Applejack);
}

int main(void) {
	ponyOnTheStack("Rainbow Dash", "Blue", "Loyalty", "Ponyville Weather Patrol");
	ponyOnTheHeap("Applejack", "Orange", "Honesty", "Farmer");

	return (0);
}
