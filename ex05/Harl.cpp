/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:54:29 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/25 15:28:15 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
	std::cout << "Welcome to Dreamland, where all dreams can come true." \
		<< std::endl;
	std::cout << std::endl;
}

Harl::~Harl( void ) {
	std::cout << "I hate this fucking job." \
		<< std::endl;
}

void	Harl::info( void ) {
	std::cout << GREEN << "[INFO]" << DEFAULT << \
		" The standard entrance fee to the park is only 55 euros." \
		<< std::endl;
	std::cout << std::endl;
}

void	Harl::debug( void ) {
	std::cout << YELLOW << "I didn't hear you well, can you repeat please?" \
		<< DEFAULT << std::endl;
	std::cout << std::endl;
}

void	Harl::error( void ) {
	std::cout << RED << "[ERROR]" << DEFAULT << \
	" My apologies dear customer, but our system is temporarily" \
	" out of service, please take a 5 percent discount voucher for the next" \
	" time you come to visit us as compensation for this incident." << std::endl;
	std::cout << std::endl;
}

void	Harl::warning( void ) {
    std::cout << "If you take the supplement, the first drink will be" \
		" free and you can take a photo with our pet for only 30 euros" \
		" more each." << std::endl;
	std::cout << std::endl;
}

void	Harl::complain( std::string level ) {
	std::string	levels[4] = {"INFO", "DEBUG", "ERROR", "WARNING"};
	void	(Harl::*complain_ptr[4])(void) = {&Harl::info, &Harl::debug, &Harl::error, &Harl::warning};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level)
		{
			(this->*complain_ptr[i])();
			break ;
		}
	}
}