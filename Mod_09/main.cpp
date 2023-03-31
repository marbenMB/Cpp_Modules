#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		BitcoinExchange::printError(E_FILE, NO_ARG);
		return 1;
	}
	else
	{
		BitcoinExchange exChanger(av[1]);

		try {
			exChanger.stockDB();
		}	catch (std::exception &e) {
			return 1;
		}
	}

	return (0);
}
