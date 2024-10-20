#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
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
