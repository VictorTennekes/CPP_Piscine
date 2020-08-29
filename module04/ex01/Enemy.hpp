/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 16:43:07 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/04 16:43:07 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class Enemy {
	public:
		Enemy(int hp, std::string const &type);
		Enemy(const Enemy &src);
		Enemy &operator=(const Enemy &enemy);
		virtual ~Enemy();

		std::string		getType() const;
		int				getHP() const;
		virtual void	takeDamage(int damage);

	protected:
		std::string	_type;
		int			_hp;

	private:
		Enemy();
};

#endif
