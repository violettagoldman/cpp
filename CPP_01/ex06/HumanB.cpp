#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "HumanB created\n";
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB destructed\n";
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attcks with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
