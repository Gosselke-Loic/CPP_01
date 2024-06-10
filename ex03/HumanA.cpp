/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:28:27 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/25 10:18:57 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* Constructor and desctructor */

HumanA::HumanA( std::string name, Weapon &weapon ): _name(name), _weapon(weapon) {
    std::cout << "HumanA: " << HumanA::getName() << " created with " \
		<< this->getWeaponType() << std::endl;
}

HumanA::~HumanA( void ) {
    std::cout << "HumanA: " << HumanA::getName() << " destroyed" << std::endl;
}

/* Getters */

std::string	HumanA::getName( void ) {
	return (this->_name);
}

std::string	HumanA::getWeaponType ( void ) {
	return (this->_weapon.getType());
}

/* Setters */

void	HumanA::setWeapon( Weapon weapon ) {
	this->_weapon = weapon;
}

/* Methods */

void	HumanA::attack( void ) {
	std::cout << this->getName() << " attack with " << this->getWeaponType() \
		<< std::endl;
}
