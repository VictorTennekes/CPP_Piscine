/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:06:08 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 16:06:08 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak() {
	std::string*        panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
}

int	main(void) {
	memoryLeak();
	return (0);
}