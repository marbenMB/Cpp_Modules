/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:04:47 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/24 20:43:26 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FragTrap_HPP_
#define _FragTrap_HPP_

#include <iostream>
#include "ClapTrap.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	FragTrap : virtual public ClapTrap
{
	public	:
		FragTrap ();
		FragTrap (FragTrap const &obj);
		FragTrap (std::string name);
		~FragTrap ();
		FragTrap &operator= (const FragTrap &obj);

		void	highFivesGuys(void);
	private	:
		//	private attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
