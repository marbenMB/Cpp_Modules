#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat : Default Constructor Called" << std::endl;
	type = "Cat";
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat : Destructor Called" << std::endl;
	delete	_brain;
}

Cat::Cat(Cat const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cat	&Cat::operator= (const Cat &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
		// delete _brain;
		this->_brain = new Brain();
		*(this->_brain) = *(obj._brain);	
	}
	return (*this);
}

void	Cat::makeSound (void) const
{
	std::cout << "Meow Meow ..." << std::endl;
}
