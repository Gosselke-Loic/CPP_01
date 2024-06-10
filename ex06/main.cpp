/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:54:54 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/26 10:43:57 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	to_number(char *arg) {
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == arg)
			return (i);
	}
	return (-1);
}

std::string	harly_switch(char *arg)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	switch (to_number(arg)) {
		case 0:
			return (levels[0]);
		case 1:
			return (levels[1]);
		case 2:
			return (levels[2]);
		case 3:
			return (levels[3]);
			break;
		default:
			return ("");
	}
}

int main( int argc, char **argv ) {
	std::string	res;
    Harl		harly;

    if (argc != 2)
        std::cout << "Try again, with arguments." << std::endl;
	else {
		res = harly_switch(argv[1]);
		if (res.empty())
			return (0);
		harly.complain(res);
	}
    return (0);
}