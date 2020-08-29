/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/09 17:44:11 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/09 17:44:11 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern &src);
		Intern &operator=(const Intern &src);
		~Intern();

		Form	*makeForm(const std::string &name, const std::string &target);

		class InvalidFormType: public std::exception {
			public:
				const char *what() const throw();
		};
};

#endif
