#ifndef _PmergeMe_HPP_
#define _PmergeMe_HPP_

#include <iostream>
#include <iomanip>
#include <sys/time.h>
#include <vector>
#include <deque>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	PmergeMe
{
	public	:
		PmergeMe ();
		PmergeMe (int ac, char **tab);
		PmergeMe (PmergeMe const &obj);
		~PmergeMe ();
		PmergeMe &operator= (const PmergeMe &obj);

		void				insertSortVec(std::vector<int> &vec);
		std::vector<int>	mergeSortVec(std::vector<int> vec);
		std::vector<int>	mergeVec(std::vector<int> a, std::vector<int> b);

		void				fillVec(void);
		void				fillDeq(void);
		void				sortVec(void);
		void				sortDeq(void);

		void				insertSortDeq(std::deque<int> &deq);
		std::deque<int>		mergeSortDeq(std::deque<int> deq);
		std::deque<int>		mergeDeq(std::deque<int> a, std::deque<int> b);
	
	private :
		std::vector<int>	_DB;
		std::vector<int>	_vecDB;
		std::vector<int>	_vecDBsorted;
		double			_vecTime;
		std::deque<int>		_deqDB;
		std::deque<int>		_deqDBsorted;
		double			_deqTime;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //


bool	checkIsNum (std::string strNum);
void	swapVal (int &a, int &b);
long long	ft_gettime(void);

template <typename T>
void	printDB (T DB)
{
	for (typename T::iterator it = DB.begin(); it != DB.end(); it++)
	{
		std::cout << " | " << *it;
	}
	std::cout << std::endl;
}

#endif
