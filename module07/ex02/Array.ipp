/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.ipp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/11 14:05:14 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/11 14:05:14 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <exception>

template <typename T>
Array<T>::Array() : array(NULL), arraySize(0) {}

template <typename T>
Array<T>::Array(unsigned int size) : array(NULL), arraySize(size) {
	if (size <=0)
		throw std::exception();
	array = new T[size];
	for (unsigned int i = 0; i < size; i++)
		array[i] = T();
}

template <typename T>
Array<T>::Array(const Array &src) : array(NULL), arraySize(0) {
	if (src.size() > 0) {
		array = new T[src.size()];
		for (unsigned int i = 0; i < src.size(); i++) {
			array[i] = src.array[i];
		}
		arraySize = src.size();
	}
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &src) {
	if (&src == array)
		return (*this);
	delete [] array;
	array = NULL;
	arraySize = 0;
	if (src.size() > 0) {
		array = new T[src.size()];
		for (unsigned int i = 0; i < src.size(); i++) {
			array[i] = src.array[i];
		}
		arraySize = src.size();
	}
	return (*this);
}

template <typename T>
Array<T>::~Array() {
	delete [] array;
}

template <typename T>
T	&Array<T>::operator[](unsigned int index) {
	if (index < 0 || index >= this->size())	
		throw std::exception();
	return(array[index]);
}

template <typename T>
unsigned int	Array<T>::size() const {
	return (arraySize);
}
