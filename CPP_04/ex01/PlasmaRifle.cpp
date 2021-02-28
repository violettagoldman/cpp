#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src)
{
	*this = src;
}

PlasmaRifle::~PlasmaRifle(void)
{
}

PlasmaRifle	&PlasmaRifle::operator=(PlasmaRifle const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_damagePoints = src._damagePoints;
		this->_shootingCost = src._shootingCost;
	}
	return (*this);
}

void				PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}
