/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:38:03 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/12 17:51:22 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int		N = 6;
	Zombie	*arr = zombieHorde(N, "mar");
	
	for (int i = 0; i < N; i++)
		arr[i].annouce();
	
	delete [] arr;
	return (0);
}