/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 22:37:26 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/28 22:37:26 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int ac, char **av) {
	std::ifstream	myFile;
	std::ofstream	outputFile;
	std::string		line;
	std::string		buffer;
	try {
		if (ac != 4) throw("function needs 3 arguments");
		myFile.open(av[1]);
		outputFile.open(av[1] + std::string(".replace"), std::ios::trunc & std::ios_base::app);
		if (!myFile.good()) throw("reading file");
		else if (!outputFile.good()) throw("creating file");
		else if (!av[2] || !av[3]) throw("empty argument");
	} catch(char const *error) {
		std::cerr << "Error: " << error << std::endl; exit(1);
	}
	while (std::getline(myFile, line)) {
		size_t pos = line.find(av[2]);
		while(pos != std::string::npos) {
			line.replace(pos, std::strlen(av[2]), av[3]);
			pos = line.find(av[2], pos + std::strlen(av[3]));
		}
		buffer += line + '\n';
	}
	buffer.pop_back();
	outputFile << buffer;
	myFile.close();
	outputFile.close();
	return (0);
}
