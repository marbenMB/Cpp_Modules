/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:01:18 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/15 16:04:23 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_SED_HPP_
#define	_SED_HPP_

// ******************************************************** //
//                         INCLUDES                        //
// ****************************************************** //
#include <iostream>
#include <fstream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Sed
{
	private :
		std::string		_iFileName;
		std::string		_oFileName;
		std::string		_s1;
		std::string		_s2;
	public : 
		std::ofstream	outFile;
		std::ifstream	inFile;
		void			setProp(std::string	file, std::string s1, std::string s2);
		std::string		getOFileName(void)	const;
		std::string		getIFileName(void)	const;
		std::string		getS1(void)	const;
		std::string		getS2(void)	const;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif