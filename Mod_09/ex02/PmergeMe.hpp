#ifndef _PmergeMe_HPP_
#define _PmergeMe_HPP_

#include <iostream>
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
		void	mergeVec();
		void	insertVec();
		void	mergeDeq();
		void	insertDeq();

	private	:
		std::vector<int>	_vecDB;
		std::deque<int>		_deqDB;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

bool	checkIsNum (std::string strNum);

#endif
