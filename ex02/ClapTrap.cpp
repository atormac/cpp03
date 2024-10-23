#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_hitpoints = 10;
	this->_energypoints = 10;
	this->_attackdamage = 0;
	this->_name = "default";
	std::cout << "ClapTrap default constructor called " << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_hitpoints = 10;
	this->_energypoints = 10;
	this->_attackdamage = 0;
	this->_name = name;
	std::cout << "ClapTrap " << name << " constructor called " << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destructor called " << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	*this = c;

}
ClapTrap &ClapTrap::operator=(const ClapTrap &c)
{
	this->_name = c._name;
	this->_hitpoints = c._hitpoints;
	this->_energypoints = c._energypoints;
	this->_attackdamage = c._attackdamage;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energypoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points to attack!" << std::endl;
		return;
	}
	if (this->_hitpoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no health points to attack!" << std::endl;
		return;
	}
	this->_energypoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has is dead!" << std::endl;
		return;
	}
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
	if (this->_hitpoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no hitpoints to repair!" << std::endl;
		return;
	}
	this->_energypoints--;
	this->_hitpoints += amount;
	std::cout << "ClapTrap " << this->_name << " repaired " << amount << " points!" << std::endl;
}
