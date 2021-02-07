#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Let's get this party started!\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	this->_maxHitPoints = 100;
	this->_maxEnergyPoints = 50;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Let's get this party started!\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	this->_maxHitPoints = 100;
	this->_maxEnergyPoints = 50;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "This time it'll be awesome, I promise!\n";
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "I'll stop talking when I'm dead!\n";
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &src) 
{
	std::cout << "Wubwubwub. Dubstep dubstep. Wubwubwubwub DROP! Dubstep!\n";
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

void		ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "ScavTrap " << this->_name << " attacks with Kalashnikov " << target << \
		" at range, causing " << _rangedAttackDamage << " points of damage\n";
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "ScavTrap " << this->_name << " attacks " << target << \
		" at range, causing " << _meleeAttackDamage << " points of damage\n";
}

void		ScavTrap::challengeNewcomer(std::string const &target)
{
	int			choice;
	std::string	challenge;

	if (this->_energyPoints < 25)
	{
		std::cout << this->_name << " can't ho Brrrrrr, lack of energy!\n";
		return ;
	}
	this->_energyPoints -= 25;
	choice = rand() % 5;
	switch (choice) {
		case 0:
			challenge = "Try Not to Laugh";
			break;
		case 1:
			challenge = "10.000 Kcal Calories";
			break;
		case 2:
			challenge = "Water bottle";
			break;
		case 3:
			challenge = "Tide Pod";
			break;
		case 4:
			challenge = "The whisper";
			break;
	}
	std::cout << this->_name << " gives " << target << " the " << challenge << " challenge!\n";
}