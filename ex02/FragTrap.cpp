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

FragTrap::FragTrap(const FragTrap &f) : ClapTrap(f)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &s)
{
	std::cout << "FragTrap " << s._name << " assignment overload called " << std::endl;
	if (this == &s)
		return *this;
	this->_name = s._name;
	this->_hitpoints = s._hitpoints;
	this->_energypoints = s._energypoints;
	this->_attackdamage = s._attackdamage;
	return *this;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << " high fives guys!" << std::endl;
}
