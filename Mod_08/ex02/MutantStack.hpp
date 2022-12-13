/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:32:30 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/13 19:32:28 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MutantStack_HPP_
#define _MutantStack_HPP_

#include <iostream>
#include <stack>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

template <class T,  class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public	:
		MutantStack () {}
		MutantStack (MutantStack const &obj) { *this = obj; }
		~MutantStack () {}
		MutantStack<T, Container> &operator= (MutantStack<T, Container> const& other)
		{
			this->c = other.c;
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin() { return MutantStack<T, Container>::c.begin(); }
		iterator	end() { return MutantStack<T, Container>::c.end(); }

	private	:
		//	DataType	attributes.
};
// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
