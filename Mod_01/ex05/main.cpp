/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:53:37 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/16 02:45:11 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	obj;
	obj.complain("DEBUG");
	obj.complain("INFO");
	obj.complain("WARNING");
	obj.complain("ERROR");
	obj.complain("");
	return (0);
}