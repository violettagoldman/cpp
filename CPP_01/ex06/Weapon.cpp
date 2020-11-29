#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon created\n";
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destructed\n";
}

std::string		Weapon::getType(void) const
{
	return (this->_type);
}

void			Weapon::setType(std::string type)
{
	this->_type = type;
}
