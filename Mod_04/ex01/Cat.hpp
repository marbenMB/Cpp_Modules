#ifndef _Cat_HPP_
#define _Cat_HPP_

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Cat : public Animal
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

class	WrongCat : public WrongAnimal
{
	public	:
		WrongCat ();
		WrongCat (WrongCat const &obj);
		~WrongCat ();
		WrongCat &operator= (const WrongCat &obj);

		void makeSound (void) const;
	private	:
		//	private attributes.
};
// ******************************************************** //
	//                        FUNCTIONS                        //
	// ****************************************************** //

#endif
