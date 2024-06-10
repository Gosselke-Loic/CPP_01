/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:20:49 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/28 13:27:20 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	to_replace(char **argv, std::string line) {

	size_t			pos;
	std::ofstream	outfile;
	std::string		toFind = argv[2];
	std::string		replace = argv[3];

	outfile.open(((std::string)argv[1] + ".replace").c_str());
	if (outfile.fail())
		return (1);
	pos = line.find(toFind);
	while (pos != std::string::npos) {
		line.erase(pos, toFind.length());
		line.insert(pos, replace);
		pos = line.find(toFind, (pos + replace.length()));
	}
	outfile << line;
	outfile.close();
	return (0);
}

int	main(int argc, char **argv) {

	std::string		line;
	std::ifstream	infile;

	if (argc != 4) {
		std::cout << "error: bad number of arguments" << std::endl;
		return (1);
	}
	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << "error: " << argv[1] << ":" \
			<< " no such file or directory" << std::endl;
		return (1);
	}
	else if (infile.is_open() && std::getline(infile, line, '\0')) {
		if (to_replace(argv, line))
			return (1);
	}
	infile.close();
	return (0);
}