/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 05:15:32 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/22 21:27:06 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ClapTrap_HPP_
#define _ClapTrap_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	ClapTrap
{
	public	:
		ClapTrap ();
		ClapTrap (std::string name);
		ClapTrap (ClapTrap const &obj);
		~ClapTrap ();
		ClapTrap &operator= (const ClapTrap &obj);

		void		attack (const std::string &target);
		void		takeDamage (unsigned int amount);
		void		beRepaired (unsigned int amount);
		void		clapTrapStat (void) const;
		std::string	getName (void) const;
		int			getDamage (void) const;

	protected	:
		std::string	_name;
		int			_hitPt;
		int			_energy;
		int			_damage;
		
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
