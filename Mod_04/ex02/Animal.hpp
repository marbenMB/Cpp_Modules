/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:34:12 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/27 19:25:08 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Animal_HPP_
#define _Animal_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	AAnimal
{
	public	:
		AAnimal ();
		AAnimal (AAnimal const &obj);
		virtual ~AAnimal ();
		AAnimal &operator= (const AAnimal &obj);
		
		virtual void	makeSound (void) const = 0;
		std::string		getType (void) const;
	protected :
		std::string	type;
	
};
// ******************************************************** //
	//                        FUNCTIONS                        //
	// ****************************************************** //

#endif
