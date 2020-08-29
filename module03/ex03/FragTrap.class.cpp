/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 14:57:40 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/30 14:57:40 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::string message[] = {
		"Hey everybody! Check out my package!",
		"Let's get this party started!",
		"Glitching weirdness is a term of endearment, right?",
		"Recompiling my combat code!",
		"This time it'll be awesome, I promise!",
		"Look out everybody! Things are about to get awesome!"
	};

	this->_name = name;
	this->_hp = 100;
	this->_hpMax = 100;
	this->_energy = 100;
	this->_energyMax = 100;
	this->_level = 1;
	this->_meleeAttack = 30;
	this->_rangedAttack = 20;
	this->_armor = 5;
	std::cout << "<" << this->_name << "> \"" << message[std::rand() % 6] << "\"" << std::endl;
}

FragTrap::~FragTrap() {
	std::string message[] = {
		"I'll stop talking when I'm dead!",
		"I'll die the way I lived: annoying!",
		"Come back here! I'll gnaw your legs off!",
		"This could've gone better!",
		"You look like something a skag barfed up!",
		"What's that smell? Oh wait, it's just you!",
		"Yo momma's so dumb, she couldn't think of a good ending for this 'yo momma' joke!",
		"You're one screw short of a screw!",
		"I bet your mom could do better!",
		"You look like something a skag barfed up!",
		"Oh yeah? Well, uh... yeah.",
		"What is that smell? Oh, never mind... it's just you!",
		"I'm leaking!",
		"Good thing I don't have a soul!",
		"Aww!",
		"Aww! Come on!",
		"You can't kill me!",
		"I'm too pretty to die!",
		"Crap!",
		"Robot down!",
		"No, nononono NO!",
		"I'll never go back to the bad place!",
		"I have many regrets!"
	};
	std::cout << "<" << this->_name << "> \"" << message[std::rand() % 23] << "\"" << std::endl;
}

void	FragTrap::rangedAttack(std::string const &target) {
	std::cout << "<" << this->_name << "> " << "I'm a tornado of death and bullets!" << std::endl;
	std::cout << "<" << this->_name << "> attacks <"
	<< target << "> at range causing <"
	<< this->_rangedAttack << "> points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target) {
	std::cout << "<" << this->_name << "> attacks <"
		<< target << "> from close by dealing <"
		<< this->_rangedAttack << "> points of damage! \"Bop!\"" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target) {
	std::string vaulthunter[] = {
		"This time it'll be awesome, I promise!",
		"Hey everybody, check out my package!",
		"Place your bets!",
		"Defragmenting!",
		"Recompiling my combat code!",
		"Running the sequencer!",
		"It's happening... it's happening!",
		"It's about to get magical!",
		"I'm pulling tricks outta my hat!",
		"You can't just program this level of excitement!",
		"What will he do next?",
		"Things are about to get awesome!",
		"Let's get this party started!",
		"Glitchy weirdness is term of endearment, right?",
		"Push this button, flip this dongle, voila! Help me!",
		"Square the I, carry the 1... YES!",
		"Resequencing combat protocols!",
		"Look out everybody, things are about to get awesome!",
		"I have an IDEA!",
		"Round and around and around she goes!",
		"It's like a box of chocolates...",
		"Step right up to the sequence of Trapping!",
		"Hey everybody, check out my package!",
		"Loading combat packages!",
		"F to the R to the 4 to the G to the WHAAT!"
	};
	std::string attacks[] = {
		"snipes!",
		"professor punches!",
		"says You're listening to 'Short-Range Damage Radio'. and damages",
		"annoys",
		"Zippity doodahs!"
	};
	std::string punchline[] = {
		"Aw yeah!",
		"Woohoo! In your face!",
		"Who's a badass robot? This guy!",
		"I am so impressed with myself!",
		"Ha ha, this is in no way surprising! Ha ha!"
	};
	if (this->_energy >= 25) {
		std::cout << "<" << this->_name << "> \"" << vaulthunter[std::rand() % 25] << "\"" << std::endl;
		std::cout << "<" << this->_name << "> "
			<< attacks[std::rand() % 5] << " " << target << " dealing <"
		<< 40 << "> points of damage! \"" << punchline[std::rand() % 5] << "\"" << std::endl;
		this->_energy -= 25;
	} else {
		std::cout << "Crap happens. Not enough mana to use vaulthunter.exe" << std::endl;
	}
}
