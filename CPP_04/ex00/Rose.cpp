#include "Rose.hpp"

Rose::Rose(void) : Victim("Rose")
{
}

Rose::Rose(std::string name) : Victim(name)
{
	std::cout << "Zig Zig.\n";
}

Rose::Rose(Rose const &src) : Victim(src)
{
	*this = src;
}

Rose::~Rose(void)
{
	std::cout << "Oups.....!\n";
}

Rose	&Rose::operator=(Rose const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
	}
	return (*this);
}

void	Rose::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a cutie cat!\n";
}