/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:39:19 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/28 11:29:55 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << "Zombie for the horde was created!" << std::endl;
}

Zombie::Zombie( std::string name ): _name(name) {
	std::cout << "Zombie: " << this->_name << " was created!" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie: " << this->_name << " was destroyed!" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << this->_name << std::endl;
}

void    Zombie::setName( std::string str ) {
    this->_name = str;
}

std::string Zombie::getName( void ) const {
    return (this->_name);
}