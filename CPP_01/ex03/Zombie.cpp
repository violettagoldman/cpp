#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << "Hello!\n";
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie died\n";
}

void	Zombie::advert(void) const
{
	std::cout << "<" << _name << "(" << _type << ")>  Braiiiiiiinnnssss ...\n";
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::setType(std::string type)
{
	this->_type = type;
}

