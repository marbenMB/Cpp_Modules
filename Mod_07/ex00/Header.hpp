/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:13:23 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/11 02:24:57 by mbenbajj         ###   ########.fr       */
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
	return (fst < snd) ? fst : snd;
}

template <typename T>
T	max (T fst, T snd)
{
	return (fst > snd) ? fst : snd;
}

#endif
