#ifndef _Dog_HPP_
#define _Dog_HPP_

#include <iostream>
#include "Animal.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Dog : public Animal
{
	public	:
		Dog ();
		Dog (Dog const &obj);
		~Dog ();
		Dog &operator= (const Dog &obj);

		virtual void makeSound (void) const;
	private	:
		//	private attributes.
};

// ******************************************************** //
	//                        FUNCTIONS                        //
	// ****************************************************** //

#endif
