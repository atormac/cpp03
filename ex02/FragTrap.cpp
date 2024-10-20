#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default")
{
	this->_is_guarding = false;
	std::cout << "FragTrap default constructor: " << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor name: " << this->_name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
	this->_is_guarding = false;
	std::cout << "FragTrap constructor name: " << name << std::endl;
}

void	FragTrap::guardGate()
{
	if (!this->_is_guarding)
		std::cout << "FragTrap " << this->_name << " is in gatekeeper mode!" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " already in gatekeeper mode!" << std::endl;
	this->_is_guarding = true;
}
