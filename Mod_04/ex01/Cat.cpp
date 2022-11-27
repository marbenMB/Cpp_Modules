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

WrongCat::WrongCat()
{
	std::cout << "WrongCat : Default Constructor Called" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : Destructor Called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

WrongCat	&WrongCat::operator= (const WrongCat &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

void	WrongCat::makeSound (void) const
{
	std::cout << "Meow Meow ..." << std::endl;
}
