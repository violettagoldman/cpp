#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "HumanA created\n";
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA destructed\n";
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attcks with his " << this->_weapon.getType() << std::endl;
}
