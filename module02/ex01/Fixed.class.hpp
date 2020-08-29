/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 18:13:11 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/29 18:13:11 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <cmath>
# include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int				toInt(void) const;

	private:
		int					_value;
		static const int	_fracBits = 8;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif
