#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : _name(name), _weapon(club)
{
	std::cout << "HumanA : Constructor Called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA : Destructor Called" << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name
			<< "attacks with their "
			<< this->_weapon.getType() << std::endl;
}