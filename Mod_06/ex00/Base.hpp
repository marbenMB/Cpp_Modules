/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 01:09:41 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/08 21:49:49 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Base_HPP_
#define _Base_HPP_

#include <iostream>
#include <sstream>
#include <exception>
#include <iomanip>
#include <climits>
#include <cmath>
#include <climits>

enum	Macros {
	DOTED = 12,
	SIGNED = 13,
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

		class	ErrorArg : public std::exception {
			virtual const char*	what(void) const throw();
		};
		class	MaxDataType : public std::exception {
			virtual const char*	what(void) const throw();
		};

		int		getType (void) const;
		double	getValue (void) const;
		int		getSign (void) const;
		int		getPrec (void) const;
		void	setPrec (std::string arg);

		double	readArg (const char* arg);
		void	isNumeric (std::string arg);
		void	parseArg (void);
		void	findDot (void);
		void	isNan (void);
		void	isInt (void);
		void	isChar (void);
		void	isFloat (void);
		void	isDouble (void);

	private	:
		int		_type;
		int		_sign;
		int		_dot;
		double	_value;
		bool	_valid;
		int		_prec;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //
std::ostream& operator<< (std::ostream &out, Base const &obj);

#endif
