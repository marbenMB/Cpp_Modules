/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:26:12 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/09 16:26:13 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t	serialize (Data* ptr)
{
	uintptr_t	ser;

	ser = reinterpret_cast <uintptr_t>(ptr);
	return ser;
}

Data*	deserialize (uintptr_t raw)
{
	Data	*_new;

	_new = reinterpret_cast <Data*>(raw);
	return _new;
}
