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
		// this->setRawBits(src.getRawBits());
        this->_hitPoints = src._hitPoints;
        this->_energyPoints = src._energyPoints;
        this->_level = src._level;
        this->_name = src._name;
        this->_meleeAttackDamage = src._meleeAttackDamage;
        this->_rangedAttackDamage = src._rangedAttackDamage;
        this->_armorDamageReduction = src._armorDamageReduction;
	return (*this);
}

void        rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target->name << \
        " at range, causing " << _rangedAttackDamage << " points of damage\n";
}

void		meleeAttack(std::string const &target);
void		takeDamage(unsigned int amount);
void		beRepaired(unsigned int amount);
void		vaulthunterDotExe(std::string const *target);