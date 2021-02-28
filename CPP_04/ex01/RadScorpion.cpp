#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void)
{
		this->_type = "RadScorpion";
		this->_hp = 80;
		std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(RadScorpion const &src)
{
	*this = src;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *\n";
}

RadScorpion	&RadScorpion::operator=(RadScorpion const &src)
{
	if (this != &src)
	{
		this->_type = src._type;
		this->_hp = src._hp;
	}
	return (*this);
}