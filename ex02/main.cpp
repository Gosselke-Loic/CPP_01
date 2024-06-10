/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:08:37 by lgosselk          #+#    #+#             */
/*   Updated: 2024/03/28 11:31:12 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void ) {
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout << "str address: " << &str << std::endl;
    std::cout << "stringPTR address: " << stringPTR << std::endl;
    std::cout << "stringREF address: " << &stringREF << std::endl;
    std::cout << "str value: " << str << std::endl;
    std::cout << "stringPTR value: " << *stringPTR << std::endl;
    std::cout << "stringREF value: " << stringREF << std::endl;
    return (0);
}