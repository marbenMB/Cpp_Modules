/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:25:57 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/09 16:30:14 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_BASE_HPP_
#define	_BASE_HPP_

#include <iostream>
#include <cstdlib>

class	Base {
	public :
		virtual ~Base();
};

Base*	generate (void);
void	identify (Base* p);
void	identify (Base& p);

#endif