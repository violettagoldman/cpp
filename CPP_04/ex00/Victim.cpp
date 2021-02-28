#include "Victim.hpp"

Victim::Victim(void)
{
		_name = "Victim";
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!\n";
}

Victim::Victim(Victim const &src)
{
	*this = src;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " just died for no apparent reason!\n";
}

Victim			&Victim::operator=(Victim const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
	}
	return (*this);
}

void			Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep!\n";
}

std::string		Victim::getName() const {
	return (_name);
}

std::ostream	&operator<<(std::ostream &stream, Victim const &target)
{
	stream << "I am " << target.getName() << ", and I like otters!\n";
	return (stream);
}