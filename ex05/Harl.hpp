/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:54:38 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/25 13:25:42 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# define RED "\033[1;31m"
# define DEFAULT "\033[0m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"

# include <iostream>

class Harl {
	private:
		void	info( void );
		void	debug( void );
		void	error( void );
		void	warning( void );
	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );
};

#endif