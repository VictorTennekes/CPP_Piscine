/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   database.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 14:31:18 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/27 14:31:18 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATABASE_CLASS_H
# define DATABASE_CLASS_H

# define MAX_CAPACITY 8

# include "contact.class.hpp"

class Database {
	public:
		Database();
		~Database();

		int		Count(void) const;
		void	AddContact(Contact person);
		Contact	GetContact(int i) const;
		void	List(void);

	private:
		int		_count;
		Contact	_contacts[MAX_CAPACITY];
};

#endif
