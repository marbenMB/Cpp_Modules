#include "Base.hpp"

int	main()
{
	Base	*inst = generate();

	std::cout << std::endl << "<POINTER> :" << std::endl;
	identify(inst);
	std::cout << std::endl << "<REFERENCE> :" << std::endl;
	identify(*inst);
	delete inst;
	return (0);
}