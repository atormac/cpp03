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
		virtual ~ScavTrap();
		ScavTrap(std::string);
		ScavTrap(const ScavTrap &s);
		ScavTrap &operator=(const ScavTrap &s);
		void attack(const std::string& target);
		void	guardGate(void);

};
#endif
