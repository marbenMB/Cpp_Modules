/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:57:32 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/01 08:57:33 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PresidentialPardonForm_HPP_
#define _PresidentialPardonForm_HPP_

#include <iostream>
#include "Form.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	PresidentialPardonForm : public AForm
{
	public	:
		PresidentialPardonForm ();
		PresidentialPardonForm (std::string target);
		PresidentialPardonForm (PresidentialPardonForm const &obj);
		~PresidentialPardonForm ();
		PresidentialPardonForm &operator= (const PresidentialPardonForm &obj);

		virtual void	execute (Bureaucrat const &executor) const;
	private	:
		// private attribute.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
