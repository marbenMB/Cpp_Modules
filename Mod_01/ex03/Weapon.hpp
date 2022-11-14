#ifndef	_WEAPON_HPP_
#define	_WEAPON_HPP_

// ******************************************************** //
//                         INCLUDES                        //
// ****************************************************** //
#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Weapon
{
	private :
		std::string	_type;
	public :
		Weapon(std::string type);
		~Weapon();
		std::string	const	&getType(void) const;
		void				setType(std::string	type);
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif