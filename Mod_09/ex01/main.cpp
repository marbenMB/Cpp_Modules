#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Bad Input!!" << std::endl;
		return 1;
	}
	try {
		RPN clac(av[1]);
		std::cout << clac << std::endl;
	}	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}

	return (0);
}