#include <iostream>
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap s("abc");
	s.guardGate();
	s.attack("target");
	s.guardGate();
	return 0;
}
