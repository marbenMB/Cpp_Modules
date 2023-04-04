#include "PmergeMe.hpp"

//?:	----	CLASSES:	----	:?//

PmergeMe::PmergeMe()
{
	// std::cout << "PmergeMe : Default Constructor Called" << std::endl;
}

PmergeMe::PmergeMe(int ac, char **tab)
{
	for (int i = 0; i < ac; i++)
	{
		if (!checkIsNum(tab[i]))
			throw	std::runtime_error("Bad Argument!!!");
		else
			_vecDB.push_back(std::atoi(tab[i]));
	}
	for (std::vector<int>::iterator it = _vecDB.begin(); it != _vecDB.end(); it++)
		_deqDB.push_back(*it);
	std::cout << std::endl;
}

PmergeMe::~PmergeMe()
{
	// std::cout << "PmergeMe : Destructor Called" << std::endl;
}

PmergeMe::PmergeMe(PmergeMe const &obj)
{
	// std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

PmergeMe	&PmergeMe::operator= (const PmergeMe &obj)
{
	// std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		_vecDB = obj._vecDB;
		_deqDB = obj._deqDB;
	}
	return (*this);
}

//?:	----	FUNCTIONS	----	:?//

bool	checkIsNum (std::string strNum)
{
	for (int i = 0; i < (int)strNum.length(); i++)
		if (!std::isdigit(strNum[i]))
			return false;
	return true;
}