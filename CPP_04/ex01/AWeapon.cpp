#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
		this->_name = "Default";
		this->_shootingCost = 5;
		this->_damagePoints = 50;
}

AWeapon::AWeapon(std::string const &name, int shootingCost, int damagePoints)
{
	this->_name = name;
	this->_shootingCost = shootingCost;
	this->_damagePoints = damagePoints;
}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
}

AWeapon::~AWeapon(void)
{
}

AWeapon	&AWeapon::operator=(AWeapon const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_damagePoints = src._damagePoints;
		this->_shootingCost = src._shootingCost;
	}
	return (*this);
}

std::string		AWeapon::getName(void) const
{
	return (_name);
}

int						AWeapon::getShootingPoints(void) const
{
	return (_shootingCost);
}

int						AWeapon::getDamagePoints(void) const
{
	return (_damagePoints);
}