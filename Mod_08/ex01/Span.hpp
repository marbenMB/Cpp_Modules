/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:37:10 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/12 23:12:45 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Span_HPP_
#define _Span_HPP_

#include <iostream>
// #include <bits/stdc++.h>
#include <vector>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Span
{
	public	:
		Span ();
		Span (unsigned int N);
		Span (Span const &obj);
		~Span ();
		Span &operator= (const Span &obj);

		void	addNumber (int num);
		unsigned int	shortestSpan (void);
		unsigned int	longestSpan (void);
		template <typename T> void	fill (typename T::const_iterator begin, typename T::const_iterator end)
		{
			typename	T::const_iterator	idx;

			if (begin >= end)
				throw	std::runtime_error("Iterator Error !!");
			for (idx = begin; idx != end; idx++)
				addNumber (*idx);
		}
		void	display (void);
		
	private	:
		unsigned int		_count;
		unsigned int		_N;
		std::vector<int>	_myVec;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
