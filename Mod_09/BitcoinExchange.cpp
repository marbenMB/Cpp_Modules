#include "BitcoinExchange.hpp"

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
		// ...
	}
	return (*this);
}

void	BitcoinExchange::printError (std::string msg, std::string arg)
{
	std::cout << "Error : " << msg << arg << std::endl;
}

void	BitcoinExchange::stockDB (void) const
{
	std::ifstream	input;
	std::string		line;

	input.open(DB_PATH, std::ios_base::in);

	while (std::getline(input,	line))
	{
		line.append("\n");
		std::cout << line;
	}
}
