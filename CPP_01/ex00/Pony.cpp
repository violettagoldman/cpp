#include "Pony.hpp"

Pony::Pony(std::string name, std::string color) : _name(name), _color(color)
{
	std::cout << "Hello! My name is " << this->_name << " pony!\n";
	std::cout << "I am " << this->_color << " pony!\n";
}

Pony::~Pony(void)
{
	std::cout << "See you soon!\n";
}


void	Pony::sing(void) const
{
	std::cout << "LA LA LA 🎶\n";
}
