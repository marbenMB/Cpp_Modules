#ifndef _BitcoinExchange_HPP_
#define _BitcoinExchange_HPP_

#include <iostream>
#include <sstream>
#include <fstream>



//**	MACRO DEF	**//
#define	DB_PATH	"data.csv"
//**	ERROR MSG	**//
#define	E_FILE	"Could Not Open File."
#define E_NPOS	"Not A Positive Number."
#define E_INPUT	"Bad Input => "
#define	E_MAX	"Too Large Number."
#define NO_ARG	""
//**	*********	**//


// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	BitcoinExchange
{
	public	:
		BitcoinExchange ();
		BitcoinExchange (std::string file);
		BitcoinExchange (BitcoinExchange const &obj);
		~BitcoinExchange ();
		BitcoinExchange &operator= (const BitcoinExchange &obj);

		static void	printError(std::string msg, std::string arg);
		void		stockDB(void) const;

	private	:
		std::string	_fileName;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
