#ifndef _Base_HPP_
#define _Base_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Base
{
	public	:
		Base ();
		Base (Base const &obj);
		~Base ();
		Base &operator= (const Base &obj);

	private	:
		//	private attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
