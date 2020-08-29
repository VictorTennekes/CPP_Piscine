/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:47:51 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 18:47:51 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string	&ref = str;

	std::cout << "normal: " << str << std::endl;
	std::cout << "pointer: " << *ptr << std::endl;
	std::cout << "reference: " << ref << std::endl;
	return (0);
}