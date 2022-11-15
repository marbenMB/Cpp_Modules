
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
		std::string		_oFileName;
		std::string		_iFileName;
		std::ofstream	_oFile;
		std::ifstream	_iFile;
		std::string		_s1;
		std::string		_s2;
	public : 
		void		setProp(std::string	file, std::string s1, std::string s2);
		std::string		getOFileName(void)	const;
		std::string		getIFileName(void)	const;
		std::ofstream	&getOFile(void)	const;
		std::ifstream	&getIFile(void)	const;
		std::string		getS1(void)	const;
		std::string		getS2(void)	const;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif