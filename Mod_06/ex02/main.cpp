#include "Base.hpp"

int	main()
{
	try {
		Base	*inst = generate();
		identify(inst);
		identify(*inst);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

}