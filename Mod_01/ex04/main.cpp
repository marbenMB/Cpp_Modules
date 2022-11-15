
#include "Sed.hpp"

void	init(Sed *sd, char **av)
{
	sd->setProp(std::string(av[1]), std::string(av[2]), std::string(av[3]));
	sd->getOFile().open(sd->getOFileName());
	sd->getIFile().open(sd->getIFileName());
}

int main(int ac, char **arg)
{
	Sed	sd;
	if (ac != 4)
	{
		std::cerr << "Bad Arguments : file s1 s2" << std::endl;
		return (1);
	}
	init(&sd, arg);
	return (0);
}