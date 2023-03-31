#ifndef _BitcoinExchange_HPP_
#define _BitcoinExchange_HPP_

#include <iostream>
#include <sstream>
#include <fstream>
#include <map>



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
		void		stockDB(void);

	private	:
		std::string	_fileName;
		std::map<std::string, float>	_DB;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

std::ifstream	openFile(std::string path);

#endif
