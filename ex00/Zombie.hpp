/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:39:29 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/28 11:08:46 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class	Zombie
{
	private:
		std::string	_name;
	public:
		~Zombie( void );
		void	announce( void );
		Zombie( std::string name );
        std::string getName( void );
};

#endif