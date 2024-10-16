#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	std::cout << "ClapTrap " << name << " constructor called " << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destructor called " << std::endl;
	return;
}
void ClapTrap::attack(const std::string& target)
{
	if (this->_energypoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points to attack!" << std::endl;
		return;
	}
	this->_energypoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage" << std::endl;
	if (amount > this->_hitpoints)
		amount = this->_hitpoints;
	this->_hitpoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energypoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points to repair!" << std::endl;
		return;
	}
	this->_energypoints--;
	this->_hitpoints += amount;
	std::cout << "ClapTrap " << this->_name << " repaired " << amount << " points!" << std::endl;
}
