/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/11 13:02:35 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/11 13:02:35 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base *generate() {
	int i = (std::rand() % 3);

	switch (i) {
		case 0: return (new A);
		case 1: return (new B);
		case 2: return (new C);
	}
	return (NULL);
}

void identify_from_pointer(Base *p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	}
}

void identify_from_reference(Base &p) {
	identify_from_pointer(&p);
}

int main() {
	std::srand(time(NULL));
	Base *testClass = generate();
	identify_from_pointer(testClass);
	identify_from_reference(*testClass);
	return (0);
}
