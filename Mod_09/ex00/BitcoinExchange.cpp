#include "BitcoinExchange.hpp"

//	??	************	CLASS	************	??	//

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string file) : _fileName(file) {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &obj)
{
	// std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

BitcoinExchange	&BitcoinExchange::operator= (const BitcoinExchange &obj)
{
	// std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		_fileName = obj._fileName;
	}
	return (*this);
}

void	BitcoinExchange::printError (std::string msg, std::string arg)
{
	std::cout << "Error : " << msg << arg << std::endl;
}

void	BitcoinExchange::stockDB (void)
{
	std::ifstream	input;
	std::string		line;
	size_t			nFind;
	std::string		date;
	float			conv;

	input.open(DB_PATH, std::ios_base::in);
	if (!input.is_open())
	{
		BitcoinExchange::printError(E_FILE, NO_ARG);
		throw	std::runtime_error("");
	}

	std::getline(input, line);
	while (std::getline(input,	line))
	{
		nFind = line.find(',');
		date = line.substr(0, nFind);
		conv = atof(line.substr(nFind + 1, line.length() - (nFind)).c_str());
		_DB.insert(std::make_pair(date, conv));
		line.clear();
	}
}

void	BitcoinExchange::processInput (void)
{
	std::ifstream	input;
	std::string		line;
	size_t			nFind;
	std::string		date;
	float			price;
	float			convert;

	input.open(_fileName, std::ios_base::in);
	if (!input.is_open())
	{
		BitcoinExchange::printError(E_FILE, NO_ARG);
		throw	std::runtime_error("");
	}

	std::getline(input, line);
	if (line != "date | value")
	{
		BitcoinExchange::printError("Bad Format!!", NO_ARG);
		throw std::runtime_error("");
	}
	while (std::getline(input, line))
	{

		if (!checkPipe(line))
		{
			//?:	Checking Input Format :
			nFind = line.find('|');
			if (line[nFind - 1] != ' ' || line[nFind + 1] != ' ')
			{
				BitcoinExchange::printError(E_INPUT, line);
				continue ;
			}

			//?:	Getting Date :
			date = line.substr(0, nFind - 1);
			if (checkDate(date))
			{
				BitcoinExchange::printError(E_INPUT, line);
				continue;
			}

			//?:	Getting Price - Then Printing OutPut:
			price = atof(line.substr(nFind + 2, line.length() - (nFind + 1)).c_str());
			if (price > MAX_PRICE)
			{
				BitcoinExchange::printError(E_MAX, NO_ARG);
				continue;
			}
			else if (price < MIN_PRICE)
			{
				BitcoinExchange::printError(E_NPOS, NO_ARG);
				continue;
			}
			else
			{
				convert = (_DB[date] * price);
				std::cout << date << " => " << price << " = " << convert << std::endl;
				std::cout << "----" << std::endl;
			}
		}
		else
			BitcoinExchange::printError(E_INPUT, line);
	}
		
}


//	??	************	FUNCTIONS	************	??	//

bool	checkPipe (std::string line)
{
	size_t	nFind = -1;
	int		n_n = 0;

	do {
		nFind = line.find('|', nFind + 1);
		n_n++;
	}	while (nFind != std::string::npos);
	
	if (n_n != 2)
		return true;
	return false;
}

bool	checkDate (std::string &date)
{
	int		n_n = 0;
	size_t	nFind = -1;
	std::string	year;
	std::string	month;
	std::string	day;
	int		yy;
	int		mm;
	int		dd;

	do
	{
		nFind = date.find('-', nFind + 1);
		if (n_n == 0)
		{
			//?:	Store Year Date :
			year = date.substr(0, nFind);
			yy = std::atoi(year.c_str());
		}
		else if (n_n == 1)
		{	//?:	Store Month Date :
			month = date.substr(year.length() + 1, nFind);
			mm = std::atoi(month.c_str());

			//?:	Store Day Date :
			day = date.substr(nFind + 1, date.length() - nFind);
			dd = std::atoi(day.c_str());
		}
		else
		{
			std::cout << yy << " | " << mm << " | " << dd << std::endl;
		}

		n_n++;
	} while (nFind != std::string::npos);
	if (n_n != 3)
		return true;
	return false;
}

bool	checkLeapYear (int yy)
{
	(void)yy;
	return true;	
}