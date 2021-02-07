#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	std::cout << "SuperTrap " << this->_name << ": I'm on a roll!\n";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = NinjaTrap::_energyPoints;
	this->_level = 1;
	this->_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	this->_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	this->_armorDamageReduction = FragTrap::_armorDamageReduction;
	this->_maxHitPoints = FragTrap::_maxHitPoints;
	this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name)
{
	std::cout << "SuperTrap " << name << ": I am a tornado of death and bullets!\n";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = NinjaTrap::_energyPoints;
	this->_level = 1;
	this->_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	this->_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	this->_armorDamageReduction = FragTrap::_armorDamageReduction;
	this->_maxHitPoints = FragTrap::_maxHitPoints;
	this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
}

SuperTrap::SuperTrap(SuperTrap const &src) : FragTrap(src), NinjaTrap(src)
{
	std::cout << "SuperTrap " << this->_name << ": RUN FOR YOUR LIIIIIVES!!!\n";
	*this = src;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SuperTrap " << this->_name << ": That looks like it hurts!\n";
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &src)
{
	std::cout << "SuperTrap " << this->_name << ": I have an IDEA!\n";
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

void		SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void		SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}