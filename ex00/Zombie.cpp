/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:39:19 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/28 11:15:11 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ): _name(name)
{}

Zombie::~Zombie( void ) {
	std::cout << "Zombie: " << this->_name << " was destroyed!" << std::endl;
}

std::string Zombie::getName( void ) {
	return (this->_name);
}

void	Zombie::announce( void ) {
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ" << std::endl;
}