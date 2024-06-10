/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:29:10 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/28 11:34:04 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ): _type(type)
{}

Weapon::~Weapon( void ) 
{}

void	Weapon::setType( std::string type ) {
	this->_type = type;
}

std::string	Weapon::getType( void ) {
	return (this->_type);
}