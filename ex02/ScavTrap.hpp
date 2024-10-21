#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{

	private:
		bool _is_guarding;
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string);
		ScavTrap &operator=(const ScavTrap &s);
		void	guardGate();

};
#endif
