#include "Peon.hpp"

Peon::Peon(void) : Victim("Peon")
{
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog.\n";
}

Peon::Peon(Peon const &src) : Victim(src)
{
	*this = src;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark...!\n";
}

Peon	&Peon::operator=(Peon const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
	}
	return (*this);
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a pink pony!\n";
}