#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap target("target");
	ClapTrap c("Name");

	c.attack("target");
	c.takeDamage(5);
	c.beRepaired(5);
	c.takeDamage(5);
	c.takeDamage(5);
	c.takeDamage(5);
	c.beRepaired(5);
	return 0;
}
