/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/08 15:57:46 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/08 15:57:46 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

# include "Bureaucrat.hpp"

class Form {
	public:
		Form(const std::string &name, unsigned int signGrade, unsigned int execGrade);
		~Form();

		std::string			getName() const;
		bool				getSign() const;
		unsigned int		getSignGrade() const;
		unsigned int		getExecGrade() const;
		void				beSigned(Bureaucrat &bureaucrat);

		class GradeTooHighException: public std::exception {
			public:
				const char *what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				const char *what() const throw();
		};
		class FormAlreadySigned: public std::exception {
			public:
				const char *what() const throw();
		};

	private:
		Form(Form const &src);
		Form &operator=(Form const &src);

		const std::string	name;
		bool				isSigned;
		const unsigned int	signGrade;
		const unsigned int	execGrade;
};

std::ostream	&operator<<(std::ostream &out, const Form &form);

#endif
