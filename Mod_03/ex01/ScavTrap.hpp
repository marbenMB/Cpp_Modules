#ifndef _ScavTrap_HPP_
#define _ScavTrap_HPP_

#include <iostream>
#include "ClapTrap.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	ScavTrap : public ClapTrap
{
	public	:
		ScavTrap ();
		ScavTrap (std::string name);
		ScavTrap (ScavTrap const &obj);
		~ScavTrap ();
		ScavTrap &operator= (const ScavTrap &obj);

		void	guardGate (void);
		void	attack (std::string const &target);
	private	:
		//	private attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
