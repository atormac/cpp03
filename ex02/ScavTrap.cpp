#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default")
{
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
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

ScavTrap::ScavTrap(const ScavTrap &s) : ClapTrap(s)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s)
{
	std::cout << "ScavTrap " << s._name << " assignment overload called " << std::endl;
	if (this == &s)
		return *this;
	this->_name = s._name;
	this->_hitpoints = s._hitpoints;
	this->_energypoints = s._energypoints;
	this->_attackdamage = s._attackdamage;
	this->_is_guarding = s._is_guarding;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energypoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy points to attack!" << std::endl;
		return;
	}
	if (this->_hitpoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no health points to attack!" << std::endl;
		return;
	}
	this->_energypoints--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->_hitpoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
		return;
	}
	if (!this->_is_guarding)
		std::cout << "ScavTrap " << this->_name << " is in gatekeeper mode!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " already in gatekeeper mode!" << std::endl;
	this->_is_guarding = true;
}
