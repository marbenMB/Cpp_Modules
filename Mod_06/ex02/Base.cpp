#include "Base.hpp"

Base::~Base() {}
A::~A() {}
B::~B() {}
C::~C() {}

Base*	generate (void)
{
	int	random;

	srand(time(0));
	random = rand() % 3;
	if (random == 1)
	{
		std::cout << "A : Created!" << std::endl;
		return new A;
	}
	else if (random == 2)
	{
		std::cout << "B : Created!" << std::endl;
		return new B;
	}
	else
	{
		std::cout << "C : Created!" << std::endl;
		return new C;
	}
	return nullptr;
}

void	identify (Base* p)
{
	if (dynamic_cast<A *>(p) != nullptr)
		std::cout << "A : ";
	if (dynamic_cast<B *>(p) != nullptr)
		std::cout << "B : ";
	if (dynamic_cast<C *>(p) != nullptr)
		std::cout << "C : ";
	std::cout << "Success ptr cast!" << std::endl;
}

void	identify (Base& p)
{
	Base	tmp;
	try {
		std::cout << "A :";
		tmp = dynamic_cast<A &>(p);
		std::cout << " Success ref cast!" << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "B :";
		tmp = dynamic_cast<B &>(p);
		std::cout << " Success ref cast!" << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "C :";
		tmp = dynamic_cast<C &>(p);
		std::cout << " Success ref cast!" << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}