#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Hey! You're TALKING to me! And I didn't even have an \
exclamation point over my head! This is the BEST day of my life!\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_level = 1;
	this->_name = "basic";
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Hey! You're TALKING to me! And I didn't even have an \
exclamation point over my head! This is the BEST day of my life!\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "Success! My spell to make you want to hang out with me worked!\n";
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Stay a while, and listen. Oh god, please -- PLEASE! -- stay \
a while\n";
}

FragTrap	&FragTrap::operator=(FragTrap const &src)
{
	std::cout << "You versus me! Me versus you! Either way!\n";
	if (this != &src)
	{
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_level = src._level;
		this->_name = src._name;
		this->_meleeAttackDamage = src._meleeAttackDamage;
		this->_rangedAttackDamage = src._rangedAttackDamage;
		this->_armorDamageReduction = src._armorDamageReduction;
	}
	return (*this);
}

void		FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks with Hector's gas " << target << \
		" at range, causing " << _rangedAttackDamage << " points of damage\n";
}

void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << \
		" at range, causing " << _meleeAttackDamage << " points of damage\n";
}

void		FragTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " looses " << amount << " energy points\n";
	this->_hitPoints -= amount;
	this->_hitPoints = (this->_hitPoints < 0 ? 0 : this->_hitPoints);
}

void		FragTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " gaines " << amount << " energy points\n";
	this->_hitPoints += amount;
	this->_hitPoints = (this->_hitPoints > this->_maxHitPoints ? this->_maxHitPoints : this->_hitPoints);
}

void		FragTrap::vaulthunterDotExe(std::string const &target)
{
	int			choice;
	std::string	weapon;

	if (this->_energyPoints < 25)
	{
		std::cout << this->_name << " can't ho Brrrrrr, lack of energy!\n";
		return ;
	}
	this->_energyPoints -= 25;
	choice = rand() % 5;
	switch (choice) {
		case 0:
			weapon = "a lightsaber";
			break;
		case 1:
			weapon = "a blaster";
			break;
		case 2:
			weapon = "force lightning";
			break;
		case 3:
			weapon = "vibro axe";
			break;
		case 4:
			weapon = "foce choke";
			break;
	}
	std::cout << this->_name << " hits " << target << " with " << weapon << std::endl;
}