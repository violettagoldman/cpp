#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void)
{
		this->_type = "SuperMutant";
		this->_hp = 170;
		std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::SuperMutant(SuperMutant const &src)
{
	*this = src;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh...\n";
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &src)
{
	if (this != &src)
	{
		this->_type = src._type;
		this->_hp = src._hp;
	}
	return (*this);
}

void				SuperMutant::takeDamage(int damage)
{
	this->_hp = _hp - damage - 3;
	this->_hp = (this->_hp < 0 ? 0 : this->_hp);
	std::cout << this->_type << " has " << this->_hp << std::endl;
}