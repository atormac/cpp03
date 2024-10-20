#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default")
{
	this->_is_guarding = false;
	std::cout << "ScavTrap default constructor: " << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor name: " << this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
	this->_is_guarding = false;
	std::cout << "ScavTrap constructor name: " << name << std::endl;
}

void	ScavTrap::guardGate()
{
	if (!this->_is_guarding)
		std::cout << "ScavTrap " << this->_name << " is in gatekeeper mode!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " already in gatekeeper mode!" << std::endl;
	this->_is_guarding = true;
}