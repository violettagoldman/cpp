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
