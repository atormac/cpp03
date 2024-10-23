#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	FragTrap f("fragtrap_name");
	f.highFivesGuys();
	f.highFivesGuys();
	f.takeDamage(50);
	f.takeDamage(50);
	f.takeDamage(50);
	f.attack("target");

	FragTrap f2 = f;
	f2.beRepaired(10);
	return 0;
}
