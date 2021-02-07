#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Let me teach you the ways of magic!\n";
	this->_name = "basic";
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Let me teach you the ways of magic!\n";
	this->_name = name;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "No way! That's, like, my third favorite kind of magic!\n";
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\n";
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	std::cout << "Oh yeah? Well, uh... yeah!\n";
	if (this != &src)
	{
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_level = src._level;
		this->_name = src._name;
		this->_meleeAttackDamage = src._meleeAttackDamage;
		this->_rangedAttackDamage = src._rangedAttackDamage;
		this->_armorDamageReduction = src._armorDamageReduction;
		this->_maxEnergyPoints = src._maxEnergyPoints;
		this->_maxHitPoints = src._maxHitPoints;
	}
	return (*this);
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " looses " << amount << " energy points\n";
	this->_hitPoints -= amount;
	this->_hitPoints = (this->_hitPoints < 0 ? 0 : this->_hitPoints);
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " gaines " << amount << " energy points\n";
	this->_hitPoints += amount;
	this->_hitPoints = (this->_hitPoints > this->_maxHitPoints ? this->_maxHitPoints : this->_hitPoints);
}

std::string	ClapTrap::getName(void)
{
	return (this->_name);
}