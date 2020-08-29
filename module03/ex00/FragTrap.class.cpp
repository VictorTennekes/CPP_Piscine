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

FragTrap::FragTrap(std::string name) : _name(name) {
	std::string message[] = {
		"Hey everybody! Check out my package!",
		"Let's get this party started!",
		"Glitching weirdness is a term of endearment, right?",
		"Recompiling my combat code!",
		"This time it'll be awesome, I promise!",
		"Look out everybody! Things are about to get awesome!"
	};

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

FragTrap::FragTrap(const FragTrap &src) {
	*this = src;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap) {
	this->_hp = fragtrap._hp;
	this->_hpMax = fragtrap._hpMax;
	this->_energy = fragtrap._energy;
	this->_energyMax = fragtrap._energyMax;
	this->_level = fragtrap._level;
	this->_name = fragtrap._name;
	this->_meleeAttack = fragtrap._meleeAttack;
	this->_rangedAttack = fragtrap._rangedAttack;
	this->_armor = fragtrap._armor;
	return (*this);
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

void	FragTrap::takeDamage(unsigned int amount) {
	if (amount > 0 && amount > this->_armor) {
		if (amount - this->_armor > this->_hp) {
			this->_hp = 0;
		} else {
			this->_hp -= (amount - this->_armor);
		}
		std::cout << "<" << this->_name << "> " << "Ouch! I have <" << this->_hp << "> Health left" << std::endl;
	} else {
		std::cout << "<"<< this->_name << "> didn't even get scratched by your pityfull attack" << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount) {
	if (amount > 100) amount = 100;
	if (this->_hp + amount > 100) {
		this->_hp = 100;
	} else {
		this->_hp += amount;
	}
	std::cout << "<" << this->_name << "> gained <" << amount << "> sweet life juice! and now has <" << this->_hp << "> health points" << std::endl;
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
