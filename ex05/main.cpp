/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:54:54 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/25 15:26:30 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	usage_inputs( void ) {
	std::cout << "________________________________________________________" << std::endl;
	std::cout << "|                         INPUTS                       |" << std::endl;
	std::cout << "|______________________________________________________|" << std::endl;
	std::cout << "| 1 -> Ask for the price of the entrance.              |" << std::endl;
	std::cout << "| 2 -> To pay for the entrance/s.                      |" << std::endl;
	std::cout << "| 3 -> No supplements, thanks.                         |" << std::endl;
	std::cout << "| 4 -> With supplements, thanks.                       |" << std::endl;
	std::cout << "| 5 -> Are you kindding me?                            |" << std::endl;
	std::cout << "| 6 -> Leave.                                          |" << std::endl;
	std::cout << "________________________________________________________" << std::endl;
	std::cout << std::endl;
}

int		get_input( void ) {
	int		input;
	bool	valid = false;

	while (!valid)
	{
		std::cout << "waiting for input... " << std::flush;
		std::cin >> input;
		if (std::cin.good() && (input >= 0 && input <= 6))
			valid = true;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input" << std::endl;
		}
	}
    std::cout << std::endl;
	std::cin.ignore();
	return (input);
}

int main( void ) {
    int		input;
    Harl	harly;
    bool	switching = false;

	while (1) {
		usage_inputs();
		input = get_input();
		if (input == 1)
			harly.complain("INFO");
		else if (input == 2 && !switching)
			harly.complain("WARNING");
		else if (input == 2 && switching) {
			harly.complain("ERROR");
			break ;
		}
		else if (input == 3 || input == 4)
			harly.complain("DEBUG");
		else if (input == 5) {
			harly.complain("DEBUG");
			switching = true;
		}
		else if (input == 6) {
			harly.complain("WARNING");
			switching = true;
		}
	}
    return (0);
}