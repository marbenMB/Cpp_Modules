#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "No Args !!!" << std::endl;
		return 1;
	}
	try {
		PmergeMe	sort(ac - 1, &av[1]);

		std::cout << "Good Args √" << std::endl;
		
	}	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "******	MAR_BEN CREATION √	******" << std::endl;

	return (0);
}
