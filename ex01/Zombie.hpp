/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:39:29 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/28 11:29:01 by lgosselk         ###   ########.fr       */
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
        Zombie( void );
		~Zombie( void );
        Zombie( std::string name );
		void	    announce( void );
        std::string getName( void ) const;
        void        setName( std::string str );
};

#endif