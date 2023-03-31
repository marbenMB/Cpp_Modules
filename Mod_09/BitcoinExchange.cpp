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
	int		hint = 1;
	std::string		date;
	float			conv;

	input = openFile(DB_PATH);

	while (std::getline(input,	line))
	{
		if (hint)
		{
			hint--;
			std::cout << line << std::endl;
			continue;
		}
		nFind = line.find(',');
		date = line.substr(0, nFind);
		conv = atof(line.substr(nFind + 1, line.length() - (nFind)).c_str());
		_DB.insert(std::make_pair(date, conv));
		line.clear();
	}
}


//	??	************	FUNCTIONS	************	??	//

std::ifstream	openFile (std::string path)
{
	std::ifstream	input;

	input.open(path, std::ios_base::in);
	if (!input.is_open())
	{
		BitcoinExchange::printError(E_FILE, NO_ARG);
		throw	std::runtime_error("");
	}
}