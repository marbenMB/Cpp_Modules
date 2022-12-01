/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:57:45 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/01 08:57:46 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ShrubberyCreationForm_HPP_
#define _ShrubberyCreationForm_HPP_

#include <iostream>
#include "Form.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	ShrubberyCreationForm : public AForm
{
	public	:
		ShrubberyCreationForm ();
		ShrubberyCreationForm (std::string target);
		ShrubberyCreationForm (ShrubberyCreationForm const &obj);
		~ShrubberyCreationForm ();
		ShrubberyCreationForm &operator= (const ShrubberyCreationForm &obj);

		virtual void	execute (Bureaucrat const &executor) const;
	private	:
		// private attribute.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
