#include "Enemy.hpp"

Enemy::Enemy(void)
{
		this->_type = "Default";
		this->_hp = 50;
}

Enemy::Enemy(int hp, std::string const &type)
{
		this->_type = type;
		this->_hp = hp;
}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
}

Enemy::~Enemy(void)
{
}

Enemy					&Enemy::operator=(Enemy const &src)
{
	if (this != &src)
	{
		this->_type = src._type;
		this->_hp = src._hp;
	}
	return (*this);
}

int						Enemy::getHP(void) const
{
	return (_hp);
}

std::string		Enemy::getType(void) const
{
	return (_type);
}

void					Enemy::takeDamage(int damage)
{
	this->_hp -= damage;
	this->_hp = (this->_hp < 0 ? 0 : this->_hp);
	std::cout << this->_type << " has " << this->_hp << std::endl;
}