#ifndef _Cat_HPP_
#define _Cat_HPP_

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Cat : public AAnimal
{
	public	:
		Cat ();
		Cat (Cat const &obj);
		~Cat ();
		Cat &operator= (const Cat &obj);

		virtual void makeSound (void) const;
	private	:
		Brain	*_brain;
};
// ******************************************************** //
	//                        FUNCTIONS                        //
	// ****************************************************** //

#endif
