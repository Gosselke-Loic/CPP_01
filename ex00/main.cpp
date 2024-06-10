/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:39:39 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/28 11:21:16 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int	main( void )
{
	Zombie	*new_zombie = newZombie("Paco");
	new_zombie->announce();
	randomChump("John");
	new_zombie->~Zombie();
	return (0);
}