/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marouanebenbajja <marouanebenbajja@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 02:00:35 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/11 02:33:10 by marouaneben      ###   ########.fr       */
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
	if (!fun)
		throw "Null Function Ptr!!";
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
