/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 19:48:39 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/07 19:48:39 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

// # include "Form.hpp"

class Form;

class Bureaucrat {
	public:
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat &operator=(Bureaucrat const &src);
		~Bureaucrat();

		std::string	getName() const;
		int			getGrade() const;
		void		setGrade(int const grade);
		void		incrGrade();
		void		decrGrade();
		void		signForm(const Form &form) const;
		void		executeForm(const Form &form) const;

		class GradeTooHighException: public std::exception {
			public:
				const char *what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				const char *what() const throw();
		};

	private:
		Bureaucrat();
		std::string const	name;
		int					grade;

};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
