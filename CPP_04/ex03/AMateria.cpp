#include "AMateria.hpp"

AMateria::AMateria(void)
{
	_xp = 0;
	_type = "Default";
}

AMateria::AMateria(std::string const &type)
{
	_xp = 0;
	_type = type;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

AMateria::~AMateria(void)
{
}

AMateria					&AMateria::operator=(AMateria const &src)
{
	if (this != &src)
	{
		this->_type = src._type;
		this->_xp = src._xp;
	}
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (_type);
}

unsigned int			AMateria::getXP(void) const
{
	return (_xp);
}

void							AMateria::use(ICharacter &target)
{
	(void)target;
	_xp = _xp + 10;
}