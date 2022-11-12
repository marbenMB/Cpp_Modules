/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:56:22 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/12 17:32:28 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	// randomChump("Marouane");
	Zombie	*mar = newZombie("MAR_BEN");
	
	mar->annouce();
	randomChump("marouane");
	delete mar;
	return (0);
}