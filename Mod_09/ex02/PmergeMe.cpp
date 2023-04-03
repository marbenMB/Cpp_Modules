#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::cout << "PmergeMe : Default Constructor Called" << std::endl;
}

PmergeMe::~PmergeMe()
{
	std::cout << "PmergeMe : Destructor Called" << std::endl;
}

PmergeMe::PmergeMe(PmergeMe const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

PmergeMe	&PmergeMe::operator= (const PmergeMe &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}
