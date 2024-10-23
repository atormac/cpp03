#include <iostream>
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap s("abc");
	s.guardGate();
	s.attack("target");
	s.guardGate();
	s.takeDamage(10);
	s.takeDamage(10);
	s.takeDamage(50);
	s.takeDamage(50);
	s.takeDamage(70);
	return 0;
}
