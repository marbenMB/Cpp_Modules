#ifndef _Dog_HPP_
#define _Dog_HPP_

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Dog : public AAnimal
{
	public	:
		Dog ();
		Dog (Dog const &obj);
		~Dog ();
		Dog &operator= (const Dog &obj);

		virtual void makeSound (void) const;
	private	:
		Brain	*_brain;
};

// ******************************************************** //
	//                        FUNCTIONS                        //
	// ****************************************************** //

#endif
