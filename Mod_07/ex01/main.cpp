/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 02:24:49 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/11 02:24:50 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	int_test (void)
{
	std::cout << std::endl << "Int Test => " << std::endl;

	int	arr[6] = {1, 2 ,3, 4, 5, 6};

	::iter<int>(arr, 6, display);
}

void	char_test (void)
{
	std::cout << std::endl << "Char Test => " << std::endl;

	char	arr[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

	::iter<char>(arr, 8, display);
}

int main()
{
	//	You Code

	int_test();
	char_test();
	
	std::cout << "******	MAR_BEN CREATION √	******" << std::endl;

	return (0);
}
