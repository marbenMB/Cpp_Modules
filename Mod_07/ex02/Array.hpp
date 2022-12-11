/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 07:49:06 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/11 08:39:50 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Array_HPP_
#define _Array_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

template <class T>
class	Array
{
	public	:
		Array () // Create empty array.
		{
			_size = 0;
			_arr = new T[_size];
		}
		
		Array (unsigned int n)	// Create array with n element initialized by default.
		{
			_size = n;
			_arr = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_arr[i] = 0;
		}
		
		Array (Array const &obj)	// Copy Constructor.
		{
			if (this != &obj)
			{
				_arr = new T[1];
				*this = obj;
			}
		}

		~Array ()	// Destructor.
		{
			delete [] _arr;
		}
		
		Array &operator= (const Array &obj)	// Copy assignement operator overloade.
		{
			if (this != &obj)
			{
				delete [] _arr;
				_size = obj._size;
				_arr = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_arr[i] = obj._arr[i];
			}
			return *this;
		}

		T	&operator[] (unsigned int index)
		{
			if (index >= _size)
				throw std::invalid_argument("INDEX OUT OF ARRAY BOUNDS!!");
			return _arr[index];
		}

		unsigned int	size (void) const { return _size; }

	private	:
		T*				_arr;
		unsigned int	_size;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
