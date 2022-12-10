/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:13:23 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/10 18:21:50 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HEADER_HPP_
#define _HEADER_HPP_

#include <iostream>

// ******************************************************** //
//                        TEMPLATES                        //
// ****************************************************** //

template <typename T>
void	swap (T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min (T fst, T snd)
{
	if (fst < snd)
		return fst;
	return snd;
}

template <typename T>
T	max (T fst, T snd)
{
	if (fst > snd)
		return fst;
	return snd;
}

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
