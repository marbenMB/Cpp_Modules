#ifndef _BitcoinExchange_HPP_
#define _BitcoinExchange_HPP_

#include <iostream>
#include <sstream>
#include <fstream>
#include <map>



//**	MACRO DEF	**//
#define	DB_PATH		"data.csv"
#define	MAX_PRICE	1000
#define	MIN_PRICE	0
//**	ERROR MSG	**//
#define	E_FILE		"Could Not Open File."
#define E_NPOS		"Not A Positive Number."
#define E_INPUT		"Bad Input => "
#define	E_MAX		"Too Large Number."
#define NO_ARG		""
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
		void		processInput(void);

	private	:
		std::string	_fileName;
		std::map<std::string, float>	_DB;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

bool	checkPipe(std::string line);
bool	checkDate(std::string &date);
bool	checkIsNum(std::string strNum);
bool	checkLeapYear(int yy);
bool	checkPrice(std::string price);

#endif
