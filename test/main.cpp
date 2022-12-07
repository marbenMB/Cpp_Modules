/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:21:15 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/07 11:17:51 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "header.hpp"

// int	main()
// {
// 	int	x = -1;
// 	try	{
// 		if (x < 0)
// 			throw x;
// 	}
// 	catch (int var) {
// 		std::cout << "x is small" << std::endl;
// 	}
// 	catch (char *msg) {
// 		std::cout << msg << std::endl;
// 	}
// 	std::cout << "Hello World ! how are you" << std::endl;
// 	return 0;
// }

enum toto
{
	NUM = 4,
	CHAR,
	INT,
	FLOAT

};

int main(int ac, char **av)
{
	if (ac != 2)
		return 1;
	std::string			arg(av[1]);
	std::stringstream	ss;
	double				num;

	ss << arg;
	ss >> num;
	
	std::cout << arg << std::endl;
	if (ss.fail())
		std::cout << "Failled" << std::endl;
	else
		std::cout << num << std::endl;

	return 0;
}