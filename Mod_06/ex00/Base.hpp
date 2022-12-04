/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 01:09:41 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/04 01:09:42 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Base_HPP_
#define _Base_HPP_

#include <iostream>
#include <exception>

enum	Macros {
	INIT = 14,
	_NAN = 15,
	_INF,
	INF,
	_INFF,
	INFF,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
};

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Base
{
	public	:
		std::string	arg;
		Base ();
		Base (Base const &obj);
		~Base ();
		Base &operator= (const Base &obj);

		void	parseArg (void);		

	private	:
		int		_type;
		int		_float;
		int		_sign;
		int		_dot;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
