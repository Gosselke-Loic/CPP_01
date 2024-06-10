/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:19:31 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/21 11:50:52 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	int		i;
	Zombie	*zombies = new Zombie[N];

	i = -1;
	while (++i < N)
		zombies[i].setName(name);
	return (zombies);
}