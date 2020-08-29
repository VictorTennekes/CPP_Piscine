/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 14:25:56 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/27 14:25:56 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# define FIELD_COUNT 11

class Contact {
	public:
		Contact();
		~Contact();

		void				Prompt(void);
		void				Display(void) const;
		void				SetField(int field, std::string value);
		std::string			GetField(int field) const;
		static int			FindField(std::string field);

	private:
		static std::string	_fieldNames[FIELD_COUNT];
		std::string			_fields[FIELD_COUNT];
};

#endif
