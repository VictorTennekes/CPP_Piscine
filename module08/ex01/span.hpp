/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 13:43:52 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/12 13:43:52 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>

class Span {
	public:
		Span(unsigned int capacity);
		Span(const Span &src);
		Span &operator=(const Span &src);
		~Span();

		void	addVect(std::vector<int> vect);
		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();

	private:
		Span();

		std::vector<int>	container;
		unsigned int		capacity;
};

#endif
