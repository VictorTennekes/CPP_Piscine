/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 12:24:03 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/10 12:24:03 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <climits>
#include <cmath>
#include <cfloat>
#include <typeinfo>
#include <iomanip>

enum flagId {
	E_INF,
	E_NAN
};

enum typeId {
	E_CHAR,
	E_INT,
	E_FLOAT,
	E_DOUBLE
};

int error(std::string error) {
	std::cerr << "ERROR: " << error << std::endl; 
	exit(-1);
}

typeId	setType(std::string const &input) {
	bool	isDecimal = false;

	if (input.length() == 1 && !std::isdigit(input[0]))
		return E_CHAR;
	for (int i = 0; (unsigned int)i < input.length(); i++) {
		if (input[i] == '.') {
			if (isDecimal == true)
				error("Invalid input");
			isDecimal = true;
		}
	}
	if (isDecimal) {
		if (input[input.length() - 1] == 'f') {
			return (E_FLOAT);
		}
		return (E_DOUBLE);
	}
	return (E_INT);
}

template<typename T>
T	StringToNumber(const std::string &numberAsString) {
	T number;

	std::stringstream stream(numberAsString);
	stream >> number;
	if (stream.fail()) return (0);
	return number;
}

template<typename T>
void	printValue(long double value, bool flags[], long double limit) {
	bool isIntChar = (typeid(T) == typeid(char) || typeid(T) == typeid(int)) ? true : false;
	if (isIntChar == true) {
		if ((-limit - 1 > value || limit < value) || (flags[E_INF] || flags[E_NAN])) {
			std::cout << "Impossible" << std::endl;
			return ;
		}
	} else {
		if ((-limit - 1 > value || limit < value) && !(flags[E_INF] || flags[E_NAN])) {
			std::cout << "Impossible" << std::endl;
			return ;
		}
	}
	if (typeid(T) == typeid(char)) {
		if (!isprint(static_cast<char>(value))) {
			std::cout << "Non displayable" << std::endl;
		} else {
			std::cout << "\'" << static_cast<T>(value) << "\'" << std::endl;
		}
	} else {
		std::cout << static_cast<T>(value) << (typeid(T) == typeid(float) ? "f" : "") << std::endl;
	}
}

int main(int ac, char **av) {
	long double value;
	bool		flags[2] = {false, false};
	std::string input;
	int			type;

	if (ac != 2 || !av[1]) error("Invalid input");
	input = av[1];
	static std::string specialNum[6] = {
		"nan",
		"nanf",
		"+inf",
		"+inff",
		"-inf",
		"-inff"
	};
	for (int i = 0; i < 6; i++) {
		if (input.compare(specialNum[i]) == 0) {
			switch (i) {
				case 0: case 1:
					value = NAN; flags[E_NAN] = true;
					break;
				case 2: case 3:
					value = INFINITY; flags[E_INF] = true;
					break;
				case 4: case 5:
					value = -INFINITY; flags[E_INF] = true;
					break;
			}
		}
	}
	if (!flags[E_NAN] && !flags[E_INF]) {
		type = setType(input);
		switch (type) {
			case E_CHAR:	value = input[0];
				break;
			case E_INT:		value = StringToNumber<long int>(input);
				break;
			case E_FLOAT:	input = input.substr(0, input.length() - 1); value = StringToNumber<double>(input);
				break;
			case E_DOUBLE:	value = StringToNumber<long double>(input);
				break;
		}
	}
	std::cout << "Char: "; printValue<char>(value, flags, CHAR_MAX);
	std::cout << "Int: "; printValue<int>(value, flags, INT_MAX);
	std::cout << "Float: " << std::fixed << std::setprecision(1); printValue<float>(value, flags, FLT_MAX);
	std::cout << "Double: " << std::fixed << std::setprecision(1); printValue<double>(value, flags, DBL_MAX);
}
