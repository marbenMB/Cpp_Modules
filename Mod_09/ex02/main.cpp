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

		sort.sortVec();
		sort.sortDeq();
		
	}	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
