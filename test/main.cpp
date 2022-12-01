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

int main()
{
	Test a;
	a.setX(4);
	std::cout << a.getX();
}