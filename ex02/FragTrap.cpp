#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default")
{
	std::cout << "FragTrap default constructor called !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor name: " << this->_name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
	std::cout << "FragTrap constructor name: " << name << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << "high fives guys!" << std::endl;
}
