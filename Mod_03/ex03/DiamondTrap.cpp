#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default Constructor Called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Destructor Called" << std::endl;
}

DiamondTrap::DiamondTrap (std::string name) : name(name)
{
	std::cout << "Diamond Constructor Called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPt = 100;
	this->_energy = 50;
	this->_damage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

DiamondTrap	&DiamondTrap::operator= (const DiamondTrap &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		this->_name = obj._name;
		this->_damage = obj._damage;
		this->_hitPt = obj._hitPt;
		this->_energy = obj._energy;
	}
	return (*this);
}

void	DiamondTrap::whoAmI (void)
{
	std::cout << "DimondTrap Name : " << this->name << " | ClapTrap Name : " << this->_name << "!" << std::endl;
}
