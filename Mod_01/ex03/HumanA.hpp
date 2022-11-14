#ifndef	_HUMANA_HPP_
#define	_HUMANA_HPP_

// ******************************************************** //
//                         INCLUDES                        //
// ****************************************************** //
#include "Weapon.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	HumanA
{
	private :
		std::string	_name;
		Weapon		&_weapon;
	public :
		HumanA(std::string	name, Weapon &club);
		~HumanA();
		void	attack(void) const;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif