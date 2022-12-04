/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:21:15 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/30 18:55:07 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	// int		verI;
	enum toto	my;
	int			a;
	// float	verF;
	// double	verD;
	// char	verC;

	if (ac != 2)
		return 1;
	my = CHAR;
	a = NUM;
	std::cout << my << " " << a << std::endl;
	std::cout << av[1] << std::endl;
	// verF = std::stof(av[1]);
	// verI = static_cast<int> (*av[1]);
	// verF = static_cast<float> (*av[1]);
	// verD = static_cast<double> (*av[1]);

	// std::cout << "char : " << *av[1] << std::endl;
	// std::cout << "Int : " << verI << std::endl;
	// std::cout << "Float : " << verF << std::endl;

	// std::cout << "Double : " << verD << std::endl;


	return 0;
}