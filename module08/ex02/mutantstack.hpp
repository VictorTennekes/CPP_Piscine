/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 12:07:06 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/14 12:07:06 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <class T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() {};
		MutantStack<T>(const MutantStack<T> &src): std::stack<T>(src) {};
		MutantStack<T> &operator=(const MutantStack<T> &src);
		~MutantStack() {};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {
			return (this->c.begin());
		}

		iterator end() {
			return (this->c.end());
		}
	
	private:
};

template <typename T>
MutantStack<T>  &MutantStack<T>::operator=(const MutantStack<T> &src) {
	std::stack<T>::operator=(src);
	return (*this);
}

#endif
