#ifndef _Brain_HPP_
#define _Brain_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Brain
{
	public	:
		std::string	ideas[100];
		Brain ();
		Brain (Brain const &obj);
		~Brain ();
		Brain &operator= (const Brain &obj);

	private	:
		//	private attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
