#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog : Default Constructor Called" << std::endl;
	type = "Dog";
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog : Destructor Called" << std::endl;
	delete	_brain;
}

Dog::Dog(Dog const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Dog	&Dog::operator= (const Dog &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
		this->_brain = new Brain();
		*(this->_brain) = *(obj._brain);
	}
	return (*this);
}

void	Dog::makeSound (void) const
{
	std::cout << "Wooh Wooh ..." << std::endl;
}
