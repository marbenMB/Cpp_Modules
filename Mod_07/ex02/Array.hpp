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
		Array ();
		Array (unsigned int n);
		Array (Array const &obj);
		~Array ();
		Array &operator= (const Array &obj);

	private	:
		T*		_arr;
		size_t	_size;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
