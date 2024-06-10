/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:54:29 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/26 10:29:19 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{}

Harl::~Harl( void ) 
{}

void	Harl::info( void ) {
	std::cout << GREEN << "[INFO]" << DEFAULT << std::endl;
	std::cout << "The standard entrance fee to the park is only 55 euros." \
		<< std::endl;
	std::cout << std::endl;
}

void	Harl::debug( void ) {
	std::cout << PURPLE << "[DEBUG]" << DEFAULT << std::endl;
	std::cout << "I didn't hear you well, can you repeat please?" \
		<< std::endl;
	std::cout << std::endl;
}

void	Harl::error( void ) {
	std::cout << RED << "[ERROR]" << DEFAULT << std::endl;
	std::cout << "My apologies dear customer, but our system is temporarily" \
	" out of service, please take a 5 percent discount voucher for the next" \
	" time you come to visit us as compensation for this incident." << std::endl;
	std::cout << std::endl;
}

void	Harl::warning( void ) {
	std::cout << YELLOW << "[WARNING]" << DEFAULT << std::endl;
    std::cout << "If you take the supplement, the first drink will be" \
		" free and you can take a photo with our pet for only 30 euros" \
		" more each." << std::endl;
	std::cout << std::endl;
}

void	Harl::complain( std::string level ) {
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*complain_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level)
		{
			for (int j = i; j < 4; j++)
				(this->*complain_ptr[j])();
		}
	}
}