/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 12:27:27 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/27 12:27:27 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {
	std::string output;

	if (ac == 1) {
		output = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	} else {
		for (int i = 1; i < ac; i++) {
			std::string str = av[i];
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			output += str;
		}
	}
	std::cout << output << std::endl;
	return (0);
}
