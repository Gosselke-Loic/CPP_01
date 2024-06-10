/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:28:46 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/25 10:18:58 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/* Constructor and desctructor */

HumanB::HumanB( std::string name ): _weapon(NULL) {
    HumanB::setName(name);
    std::cout << "HumanB: " << HumanB::getName() << " created with no weapon" \
		<< std::endl;
}

HumanB::~HumanB( void ) {
    std::cout << "HumanB: " << HumanB::getName() << " destroyed" << std::endl;
}

/* Getters */

std::string	HumanB::getName( void ) {
	return (this->_name);
}

std::string	HumanB::getWeaponType ( void ) {
	return ((*this->_weapon).getType());
}

/* Setters */

void	HumanB::setWeapon( Weapon &weapon ) {
	this->_weapon = &weapon;
}

void	HumanB::setName( std::string name ) {
	this->_name = name;
}

/* Methods */

void	HumanB::attack( void ) {
	std::cout << this->getName() << " attack with " << this->getWeaponType() \
		<< std::endl;
}
