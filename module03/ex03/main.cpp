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
#include "ScavTrap.class.hpp"
#include "ClapTrap.class.hpp"
#include "NinjaTrap.class.hpp"

int	main() {
	std::srand(time(NULL));

	FragTrap	clap("\x1B[33mClaptrap\033[0m");
	ScavTrap	*trap = new ScavTrap("\x1B[34mZer0\033[0m");
	NinjaTrap	ninja("\x1B[35mFl4k\033[0m");

	clap.takeDamage(4);
	trap->takeDamage(20);
	clap.rangedAttack("Corona");
	clap.takeDamage(80);
	clap.takeDamage(50);
	clap.beRepaired(150);
	clap.meleeAttack("Corona");
	ninja.meleeAttack("Steve");
	clap.takeDamage(10);
	clap.beRepaired(50);
	clap.vaulthunter_dot_exe("Corona");
	clap.vaulthunter_dot_exe("Corona");
	trap->challengeNewComer("Someone");
	clap.vaulthunter_dot_exe("Corona");
	clap.vaulthunter_dot_exe("Corona");
	trap->challengeNewComer("Someone");
	ninja.ninjaShoeBox(*trap);
	ninja.ninjaShoeBox(clap);
	ninja.ninjaShoeBox(ninja);
	delete trap;
	clap.vaulthunter_dot_exe("Corona");
	return 0;
}
