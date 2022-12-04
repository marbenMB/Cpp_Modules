#include "Base.hpp"

Base::Base()
{
	std::cout << "Base : Default Constructor Called" << std::endl;
}

Base::~Base()
{
	std::cout << "Base : Destructor Called" << std::endl;
}

Base::Base(Base const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Base	&Base::operator= (const Base &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		// ...
	}
	return (*this);
}
