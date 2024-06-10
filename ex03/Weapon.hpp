/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:29:18 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/25 09:51:02 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class	Weapon {
	private:
		std::string	_type;
	public:
		~Weapon( void );
		Weapon( std::string type );
		std::string	getType( void );
		void		setType( std::string type );
};

#endif