/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 17:10:59 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/07 17:10:59 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

#include <iostream>

int        main(){
    IMateriaSource* matSrc = new MateriaSource();
    matSrc->learnMateria(new Ice());
    matSrc->learnMateria(new Cure());
    ICharacter* grif = new Character("Griffin");
    AMateria*    matICE;
    AMateria*    matCUR;
    matICE = matSrc->createMateria("ice");
    matCUR = matSrc->createMateria("cure");
    grif->equip(matICE);
    grif->equip(matCUR);
    ICharacter* vic = new Character("Victor");
    std::cout << matICE->getType() << " xp is "<< matICE->getXP() << std::endl;
    std::cout << matCUR->getType() << " xp is "<< matCUR->getXP() << std::endl;
    grif->use(0, *vic);
    std::cout << matICE->getType() << " xp is "<< matICE->getXP() << std::endl;
    grif->unequip(0);
    grif->use(1, *grif);
    std::cout << matCUR->getType() << " xp is "<< matCUR->getXP() << std::endl;
    grif->use(0, *vic);
    std::cout << matICE->getType() << " xp is "<< matICE->getXP() << std::endl;
    grif->use(1, *grif);
    grif->equip(matICE);
    std::cout << matCUR->getType() << " xp is "<< matCUR->getXP() << std::endl;
    grif->use(0, *vic);
    std::cout << matICE->getType() << " xp is "<< matICE->getXP() << std::endl;
    grif->use(1, *vic);
    std::cout << matCUR->getType() << " xp is "<< matCUR->getXP() << std::endl;
    delete vic;
    delete grif;
    delete matSrc;
    return (0);
}
