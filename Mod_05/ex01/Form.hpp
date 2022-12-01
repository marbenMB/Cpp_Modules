/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:56:50 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/01 08:56:51 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Form_HPP_
#define _Form_HPP_

#include <iostream>
#include "Bureaucrat.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Bureaucrat;

class	Form
{
	public	:
		Form ();
		Form (std::string name);
		Form (Form const &obj);
		~Form ();
		Form &operator= (const Form &obj);

		bool		getSign (void) const;
		int			getReq (void) const;
		int			getExec (void) const;
		std::string	const	getName (void) const;

		void	beSigned (Bureaucrat &signee);

		class	GradeTooHighException : public std::exception {
			virtual	const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			virtual	const char* what() const throw();
		};


	private	:
		std::string	const	_name;
		bool				_isSigned;
		int	const			_required;
		int	const			_execute;
};
std::ostream	&operator<< (std::ostream &out, Form const &obj);
// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
