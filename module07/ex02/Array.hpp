/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/11 13:52:58 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/11 13:52:58 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <class T>
class Array {
	public:
		Array();
		Array(unsigned int size);
		Array(const Array &src);
		Array &operator=(const Array &src);
		~Array();

		T& operator[](unsigned int index);
		unsigned int size() const;

	private:
		T				*array;
		unsigned int	arraySize;
};

# include "Array.ipp"

#endif
