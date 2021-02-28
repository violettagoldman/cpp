#include "Ice.hpp"

Ice::Ice(void)
{
	_xp = 0;
	_type = "ice";
}

Ice::Ice(std::string const &type) : AMateria(type)
{
}

Ice::Ice(Ice const &src) : AMateria("ice")
{
	*this = src;
}

Ice::~Ice(void)
{
}

Ice					&Ice::operator=(Ice const &src)
{
	if (this != &src)
	{
		this->_type = src._type;
		this->_xp = src._xp;
	}
	return (*this);
}

AMateria 			*Ice::clone(void) const
{
	return (new Ice(*this));
}

void					Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}