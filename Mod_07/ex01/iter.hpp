/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 02:00:35 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/11 02:24:42 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _iter_HPP_
#define _iter_HPP_

#include <iostream>

// ******************************************************** //
//                        TEMPLATES                        //
// ****************************************************** //

template <typename T>
void	iter (T *arr, size_t len, void fun(T const &x))
{
	for (size_t i = 0; i < len; i++)
	{
		fun(arr[i]);
	}
}

template <typename T>
void	display (T const &x)
{
	T	var;
	
	var = x;
	std::cout << var << std::endl;
}

#endif
