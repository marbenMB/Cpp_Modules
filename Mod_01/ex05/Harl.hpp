/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:53:34 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/16 01:38:38 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_HARL_HPP_
#define	_HARL_HPP_

// ******************************************************** //
//                         INCLUDES                        //
// ****************************************************** //
#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Harl
{
	private	:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public	:
		void	complain(std::string level);	
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif