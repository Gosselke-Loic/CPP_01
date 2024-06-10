/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:39:39 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/21 12:34:57 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main( void )
{
	int		i;
	Zombie	*horde;

	i = -1;
	horde = zombieHorde(10, "For the horde!!");
	while (++i < 10)
		horde[i].announce();
	delete [] horde;
	return (0);
}