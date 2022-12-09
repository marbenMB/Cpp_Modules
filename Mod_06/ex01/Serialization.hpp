/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:26:14 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/09 16:26:15 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Serialization_HPP_
#define _Serialization_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

struct Serialization
{
	int		x;
	double	y;
	char	c;
};

typedef	struct Serialization Data;

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
