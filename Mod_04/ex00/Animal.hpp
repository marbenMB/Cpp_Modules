/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:34:12 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/26 17:19:12 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Animal_HPP_
#define _Animal_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Animal
{
	public	:
		Animal ();
		Animal (Animal const &obj);
		~Animal ();
		Animal &operator= (const Animal &obj);
		
		virtual void	makeSound (void) const;
		std::string		getType (void) const;
	protected :
		std::string	type;
	
};

class	WrongAnimal
{
	public :
		WrongAnimal ();
		WrongAnimal (WrongAnimal const &obj);
		~WrongAnimal ();
		WrongAnimal	&operator= (const WrongAnimal &obj);
		
		void	makeSound (void) const;
	protected : 
		std::string	type;
};
// ******************************************************** //
	//                        FUNCTIONS                        //
	// ****************************************************** //

#endif
