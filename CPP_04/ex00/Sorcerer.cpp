#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	_name = "Sorcerer";
	_title = "Default";
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born!\n";
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!\n";
}

Sorcerer		&Sorcerer::operator=(Sorcerer const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_title = src._title;
	}
	return (*this);
}

void			Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

std::string		Sorcerer::getName() const {
	return (_name);
}

std::string		Sorcerer::getTitle() const {
	return (_title);
}

std::ostream	&operator<<(std::ostream &stream, Sorcerer const &target)
{
	stream << "I am " << target.getName() << ", " << target.getTitle() << ", and I like ponies!\n";
	return (stream);
}
