/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:31:16 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/02 02:47:21 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Intern_HPP_
#define _Intern_HPP_

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Intern
{
	public	:
		Intern ();
		Intern (Intern const &obj);
		~Intern ();
		Intern &operator= (const Intern &obj);
		
		AForm	*makeForm (std::string name, std::string target);
	private	:
		//	private attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
