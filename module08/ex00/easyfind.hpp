/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 13:36:23 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/12 13:36:23 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <typename T>
typename T::iterator	easyfind(T &container, int needle) {
	typename T::iterator it = std::find(container.begin(), container.end(), needle);
	if (it == container.end())
		throw std::exception();
	return (it);
}

#endif
