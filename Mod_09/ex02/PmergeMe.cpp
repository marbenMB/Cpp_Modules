#include "PmergeMe.hpp"

//?:	----	CLASSES:	----	:?//

PmergeMe::PmergeMe() {}

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

PmergeMe::~PmergeMe() {}

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

void	PmergeMe::insertSortVec (std::vector<int> &vec)
{
	int	j;

	for (int i = 0; i < (int)vec.size(); i++)
	{
		j = i;
		while (j > 0 && vec[j - 1] > vec[j])
			swapVal(vec[j - 1], vec[j]);
		j--;
	}
}

std::vector<int>	PmergeMe::mergeSortVec (std::vector<int> vec)
{
	if (vec.size() <= 5)
	{
		insertSortVec(vec);
		return vec;
	}
	std::vector<int>	a;
	std::vector<int>	b;
	int					idx = 0;

	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		if (idx < (int)(vec.size() / 2))
			a.push_back(*it);
		else
			b.push_back(*it);
		idx++;
	}

	a = mergeSortVec(a);
	b = mergeSortVec(b);

	return mergeVec(a, b);
}

std::vector<int>	PmergeMe::mergeVec (std::vector<int> a, std::vector<int> b)
{
	std::vector<int>	c;
	std::vector<int>::iterator at, bt;

	at = a.begin();
	bt = b.begin();

	while (at != a.end() && bt != b.end())
	{
		if (*at < *bt)
		{
			c.push_back(*at);
			a.erase(a.begin());
		}
		else
		{
			c.push_back(*bt);
			b.erase(b.begin());
		}
		at = a.begin();
		bt = b.begin();
	}

	while (at != a.end()) 
	{
		c.push_back(*at);
		a.erase(a.begin());
		at = a.begin();
	}
	
	while (bt != b.end()) 
	{
		c.push_back(*bt);
		b.erase(b.begin());
		bt = b.begin();
	}
	return c;
}

void	PmergeMe::sortVec (void)
{
	long long	now = ft_gettime();

	_vecDBsorted = mergeSortVec(_vecDB);

	_vecTime = (ft_gettime() - now) / 1000;

	std::cout << "+> Sequence : " << std::endl;
	printDB(_vecDB);
	std::cout << "+> Sorted Sequence : " << std::endl;
	printDB(_vecDBsorted);
	std::cout << "Time to Sort : " << std::fixed << std::setprecision(4) << _vecTime << " us" << std::endl;
}


//?:	----	FUNCTIONS	----	:?//

bool	checkIsNum (std::string strNum)
{
	for (int i = 0; i < (int)strNum.length(); i++)
		if (!std::isdigit(strNum[i]))
			return false;
	return true;
}

void	swapVal (int &a, int &b)
{
	int	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

long long	ft_gettime(void)
{
	struct timeval	tp;
	long long		time;

	gettimeofday(&tp, NULL);
	time = tp.tv_sec * 1000 + tp.tv_usec / 1000;
	return (time);
}