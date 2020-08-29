/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 15:23:09 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/29 15:23:09 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int main(void) {
	Fixed a;
	Fixed b( a );
	Fixed c;
	
	c = b;

	std::cout << a.getRawBits() << std::endl; std::cout << b.getRawBits() << std::endl; std::cout << c.getRawBits() << std::endl;
	return 0;
}
