/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:57:38 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/01 08:57:39 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RobotomyRequestForm_HPP_
#define _RobotomyRequestForm_HPP_

#include <iostream>
#include <cstdlib>
#include "Form.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	RobotomyRequestForm : public AForm
{
	public	:
		RobotomyRequestForm ();
		RobotomyRequestForm (std::string target);
		RobotomyRequestForm (RobotomyRequestForm const &obj);
		~RobotomyRequestForm ();
		RobotomyRequestForm &operator= (const RobotomyRequestForm &obj);

		virtual void	execute (Bureaucrat const &executor) const;
	private	:
		// private attribute.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
