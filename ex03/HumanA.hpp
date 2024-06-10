/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:28:36 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/25 10:07:54 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        Weapon      &_weapon;
    public:
        ~HumanA( void );
        void        attack( void );
        std::string	getName( void );
        std::string	getWeaponType( void );
        void		setWeapon( Weapon weapon );
        HumanA( std::string name, Weapon &weapon );
};