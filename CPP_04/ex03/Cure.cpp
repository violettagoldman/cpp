#include "Cure.hpp"

Cure::Cure(void)
{
	_xp = 0;
	_type = "cure";
}

Cure::Cure(std::string const &type) : AMateria(type)
{
}

Cure::Cure(Cure const &src) : AMateria("cure")
{
	*this = src;
}

Cure::~Cure(void)
{
}

Cure					&Cure::operator=(Cure const &src)
{
	if (this != &src)
	{
		this->_type = src._type;
		this->_xp = src._xp;
	}
	return (*this);
}

AMateria 			*Cure::clone(void) const
{
	return (new Cure(*this));
}

void					Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "*  heals " << target.getName() << "'s wounds\n";
}