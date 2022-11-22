#include "ScavTrap.hpp"

int main()
{
	ClapTrap	goko("Goko");
	ScavTrap	vijita("Vijita");
	ScavTrap	fraizer("Fraizer");

	goko.attack(vijita.getName());
	vijita.takeDamage(goko.getDamage());
	
	vijita.beRepaired(2);
	vijita.attack(goko.getName());
	goko.takeDamage(vijita.getDamage());

	goko.beRepaired(15);

	fraizer.attack(goko.getName());
	goko.takeDamage(fraizer.getDamage());

	goko.clapTrapStat();
	vijita.clapTrapStat();
	fraizer.clapTrapStat();

	fraizer.attack(vijita.getName());
	vijita.takeDamage(fraizer.getDamage());
	goko.attack(vijita.getName());
	vijita.takeDamage(goko.getDamage());

	goko.clapTrapStat();
	vijita.clapTrapStat();
	fraizer.clapTrapStat();
	return (0);
}
