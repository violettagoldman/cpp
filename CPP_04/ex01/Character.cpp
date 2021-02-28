#include "Character.hpp"

Character::Character(void)
{
		this->_name = "Default";
		this->_ap = 40;
		this->_weapon = NULL;
}

Character::Character(std::string const &name)
{
		this->_name = name;
		this->_ap = 40;
		this->_weapon = NULL;
}

Character::Character(Character const &src)
{
	*this = src;
}

Character::~Character(void)
{
}

Character					&Character::operator=(Character const &src)
{
	if (this != &src)
	{
		this->_ap = src._ap;
		this->_name = src._name;
		this->_weapon = src._weapon;
	}
	return (*this);
}

void						Character::recoverAP(void)
{
	this->_ap += 10;
	this->_ap = (this->_ap > 40 ? 40 : this->_ap);
	std::cout << this->_name << " has " << this->_ap << " AP\n";;
}

void						Character::equip(AWeapon	*weapon)
{
	this->_weapon = weapon;
}

void						Character::attack(Enemy	*enemy)
{
	if (this->_weapon == NULL)
	{
		std::cout << "Can't attack, no weapon available\n";
		return ;
	}
	if (this->_ap < this->_weapon->getShootingPoints())
	{
		std::cout << "Can't attack, not enough AP\n";
		return ;
	}
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamagePoints());
	this->_ap -= this->_weapon->getShootingPoints();
	this->_ap = (this->_ap < 0 ? 0 : this->_ap);
	if (enemy->getHP() <= 0)
		delete enemy;
}

int								Character::getAP(void) const
{
	return (_ap);
}

std::string				Character::getName(void) const
{
	return (_name);
}

AWeapon						*Character::getWeapon(void) const
{
	return (_weapon);
}

std::ostream&			operator<<(std::ostream& os, const Character& c)
{
	os << c.getName() << " has " << c.getAP() << " AP and ";
	if (c.getWeapon() == NULL)
		os << "is unarmed";
	else
		os << "wields a " << c.getWeapon()->getName();
	os << std::endl;
	return (os);
}