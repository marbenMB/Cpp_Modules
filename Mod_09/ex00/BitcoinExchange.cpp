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
		_DB = obj._DB;
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
	std::string		strPrice;
	float			price;
	float			convert;
	std::map<std::string, float>::iterator	it;

	input.open(_fileName, std::ios_base::in);
	if (!input.is_open())
	{
		BitcoinExchange::printError(E_FILE, NO_ARG);
		throw	std::runtime_error("");
	}

	std::getline(input, line);
	if (line != "date | value")
		BitcoinExchange::printError(E_INPUT, line);

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
			strPrice = line.substr(nFind + 2, line.length() - (nFind + 1));
			if (checkPrice(strPrice))
			{
				BitcoinExchange::printError(E_INPUT, line);
				continue;
			}
			price = atof(strPrice.c_str());
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
				it = _DB.lower_bound(date);
				if (it != _DB.begin() && it->first != date)
					it--;
				// std::cout << "--------\n" << it->first << " : " << it->second << std::endl << "--------\n";
				convert = (it->second * price);
				std::cout << date << " => " << price << " = " << convert << std::endl;
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
	bool	leap;

	do
	{
		nFind = date.find('-', nFind + 1);
		if (n_n == 0)
		{
			//?:	Store Year Date :
			year = date.substr(0, nFind);
			if (year.length() != 4 || checkIsNum(year))
				return true;
			yy = std::atoi(year.c_str());
			leap = checkLeapYear(yy);
		}
		else if (n_n == 1)
		{	
			//?:	Store Month Date :
			month = date.substr(year.length() + 1, date.length() - (nFind + 1));
			if (month.length() != 2 || checkIsNum(month))
				return true;
			mm = std::atoi(month.c_str());

			//?:	Store Day Date :
			day = date.substr(nFind + 1, date.length() - nFind);
			if (day.length() != 2 || checkIsNum(day))
				return true;
			dd = std::atoi(day.c_str());
		}
		else
		{
			if (yy < 1)
				return true;
			if (mm > 12 || mm < 1 || dd < 1 || dd > 31)
				return true;
			if (!leap && mm == 2 && dd > 28)
				return true;
			if (!((mm % 2 != 0 && mm <= 5) || (mm % 2 == 0 && mm > 5)))
				if (dd > 30)
					return true;
		}

		n_n++;
	} while (nFind != std::string::npos && n_n <= 3);

	if (n_n != 3)
		return true;
	return false;
}

bool	checkIsNum (std::string strNum)
{
	for (int i = 0; i < (int)strNum.length(); i++)
		if (!std::isdigit(strNum[i]))
			return true;
	return false;
}

bool	checkLeapYear (int yy)
{
	if (yy % 4 == 0 || (yy % 100 == 0 && yy % 400 == 0))
		return true;
	return false;
}

bool	checkPrice (std::string price)
{
	size_t	nFind;

	nFind = price.find('.');
	if (nFind == 0 || nFind == (price.length() - 1))
		return true;
	if (nFind != std::string::npos)
	{
		if (checkIsNum(price.substr(0, nFind)) || checkIsNum(price.substr(nFind + 1, price.length() - nFind)))
			return true;
	}
	else
		if (checkIsNum(price))
			return true;
	return false;
}