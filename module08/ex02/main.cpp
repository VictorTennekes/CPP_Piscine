/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 12:47:50 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/14 12:47:50 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

int main() {
	MutantStack<int> mstack;
	std::cout << "/	PUSHING 2 values	\\" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "/	TOP \\" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "/	POP 1	\\" << std::endl;
	mstack.pop();
	std::cout << "/	SIZE \\" << std::endl;
	std::cout << mstack.size() << std::endl;

	std::cout << "/	PUSHING 4 values	\\" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
	++it; }
	std::stack<int> s(mstack);
	return 0;
}
