#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap()
{
	std::cout << "NinjaTrap -- start bootup sequence.!\n";
	this->_hitPoints = 60;
	this->_energyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_maxHitPoints = 60;
	this->_maxEnergyPoints = 120;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Recompiling my combat code!\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_maxHitPoints = 100;
	this->_maxEnergyPoints = 100;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src) : ClapTrap(src)
{
	std::cout << "Look out everybody! Things are about to get awesome!\n";
	*this = src;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Dangit, I'm out!\n";
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &src)
{
	std::cout << "That guy looks an awful lot like a Badass!\n";
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

void		NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "NinjaTrap " << this->_name << " attacks with.... AAAAЙ " << target << \
		" at range, causing " << _rangedAttackDamage << " points of damage\n";
}

void		NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NinjaTrap " << this->_name << " attacks " << target << \
		" at range, causing " << _meleeAttackDamage << " points of damage\n";
}

void		NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << this->_name << " :stop me before I kill again, except don't! You! " << target.getName() << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << this->_name << " was me! I did that! I killed " << target.getName() << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << this->_name << " says 'Is it dead? Can, can I open my eyes now?' You! " << target.getName() << std::endl;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << this->_name << " kills his bro " << target.getName() << std::endl;
}