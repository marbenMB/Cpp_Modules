/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:37:12 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/12 23:08:15 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : _count(0), _N(N) {}

Span::~Span()
{
	// std::cout << "Span : Destructor Called" << std::endl;
}

Span::Span(Span const &obj)
{
	if (this != &obj)
		*this = obj;
}

Span	&Span::operator= (const Span &obj)
{
	if (this != &obj)
	{
		_N = obj._N;
		_myVec.clear();
		std::vector<int>::const_iterator	idx = obj._myVec.begin();
		while (idx != obj._myVec.end())
		{
			_myVec.push_back(*idx);
			idx++;
		}
	}
	return (*this);
}

void	Span::addNumber (int num)
{
	_count++;
	if (_count > _N)
		throw	std::runtime_error("Adding Element Is Not Possible!!");
	_myVec.push_back(num);
}

unsigned int	Span::shortestSpan (void)
{
	std::vector<int>	tmp;
	unsigned int		min = INT_MAX;
	unsigned int		diff;
	std::vector<int>::const_iterator	rem;
	std::vector<int>::const_iterator	idx;
	
	if (_myVec.size() < 2)
		throw std::runtime_error("No Numbers to Be Checked!!");
	tmp = _myVec;
	std::sort(tmp.begin(), tmp.end());
	rem = tmp.begin();
	for (size_t i = 0; i < tmp.size(); i++)
	{
		idx = rem + 1;
		while (idx != tmp.end())
		{
			diff = *idx - *rem;
			if (diff < min)
				min = diff;
			idx++;
		}
		rem++;
	}		
	return min;
}

unsigned int	Span::longestSpan (void)
{
	std::vector<int>	tmp;

	if (_myVec.size() < 2)
		throw std::runtime_error("No Numbers to Be Checked!!");
	tmp = _myVec;
	std::sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}

void	Span::display (void)
{
	std::vector<int>::const_iterator	idx;

	idx = _myVec.begin();
	while (idx != _myVec.end())
	{
		std::cout << *idx << " ";
		idx++; 
	}
	std::cout << std::endl;
}
