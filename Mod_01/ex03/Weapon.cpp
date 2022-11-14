#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon : Constructor Called" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon : Destructor Called" << std::endl;
}

std::string const &Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string	type)
{
	this->_type = type;
}