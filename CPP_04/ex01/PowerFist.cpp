#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &src)
{
	*this = src;
}

PowerFist::~PowerFist(void)
{
}

PowerFist	&PowerFist::operator=(PowerFist const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_damagePoints = src._damagePoints;
		this->_shootingCost = src._shootingCost;
	}
	return (*this);
}

void				PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *\n";
}
