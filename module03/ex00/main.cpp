/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 14:57:37 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/30 14:57:37 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

int	main() {
	std::srand(time(NULL));

	FragTrap	clap("\x1B[33mClaptrap\033[0m");
	FragTrap	*trap = new FragTrap("\x1B[34mTrapclap\033[0m");

	clap.takeDamage(4);
	clap.rangedAttack("Corona");
	clap.takeDamage(80);
	clap.takeDamage(50);
	clap.beRepaired(150);
	clap.meleeAttack("Corona");
	clap.takeDamage(10);
	clap.beRepaired(50);
	clap.vaulthunter_dot_exe("Corona");
	clap.vaulthunter_dot_exe("Corona");
	trap->vaulthunter_dot_exe("Someone");
	clap.vaulthunter_dot_exe("Corona");
	clap.vaulthunter_dot_exe("Corona");
	trap->vaulthunter_dot_exe("Someone");
	delete trap;
	clap.vaulthunter_dot_exe("Corona");
	return 0;
}
