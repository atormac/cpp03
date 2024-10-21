#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{

	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string);
		FragTrap &operator=(const FragTrap &f);
		void	highFivesGuys();

};
#endif
