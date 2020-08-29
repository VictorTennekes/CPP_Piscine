/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/11 13:43:08 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/11 13:43:08 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iter(T *array, unsigned int arraySize, T (*f)(T)) {
	for (unsigned int i = 0; i < arraySize; i++) {
		array[i] = f(array[i]);
	}
}

int	addOne(int value) {
	value += 1;
	return (value);
}

int main() {
	int array[6] = {1, 2, 3, 4, 5, 6};

	iter<int>(array, 6, addOne);
	for (int i = 0; i < 6; i++) {
		std::cout << array[i] << std::endl;
	}
}