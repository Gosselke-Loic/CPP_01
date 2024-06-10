/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:28:55 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/25 09:57:29 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB {
    private:
        std::string _name;
        Weapon      *_weapon;
    public:
        ~HumanB( void );
		HumanB( std::string name );
        void        attack( void );
        std::string	getName( void );
        std::string	getWeaponType( void );
        void		setWeapon( Weapon &weapon );
        void		setName( std::string name );   
};
