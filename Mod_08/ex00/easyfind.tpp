/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:33:17 by marouaneben       #+#    #+#             */
/*   Updated: 2022/12/13 19:39:28 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_TPP_
#define	_TPP_

#include "easyfind.hpp"

template <typename T>
int	easyfind (T container, int toFind)
{
	typename	T::const_iterator	found;
	
	found = std::find(container.begin(), container.end(), toFind);
	if (found == container.end())
		throw std::runtime_error("Element Not Found!!");
	return found - container.begin();
}

#endif
