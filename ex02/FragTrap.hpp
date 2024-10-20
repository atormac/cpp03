#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "FragTrap.hpp"
#include <iostream>

class FragTrap : public ScavTrap
{

	private:
		bool _is_guarding;
	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string);
		void	guardGate();

};
#endif
