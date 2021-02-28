#include "Character.hpp"

Character::Character(void)
{
	_name = "Character";
	_current = 0;
	for (int i = 0; i < 4; ++i)
		_inventory[i] = 0;
}

Character::Character(std::string const &name)
{
	_name = name;
	_current = 0;
	for (int i = 0; i < 4; ++i)
		_inventory[i] = 0;
}

Character::Character(Character const &src)
{
	_name = src._name;
	for (int i = 0; i < src._current; ++i)
		equip(src._inventory[i]->clone());
	for (int i = _current; i < 4; ++i)
		_inventory[i] = 0;
}

Character::~Character(void)
{
	for (int i = 0; i < _current; i++)
	{
		if (_inventory[i] != 0)
			delete _inventory[i];
	}
}

Character					&Character::operator=(Character const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		for (int i = 0; i < _current; ++i)
			delete _inventory[i];
		_current = 0;
		for (int i = 0; i < src._current; ++i)
			equip(src._inventory[i]->clone());
		for (int i = _current; i < 4; ++i)
			_inventory[i] = 0;
	}
	return (*this);
}

std::string const	&Character::getName() const
{
	return (_name);
}

void					Character::equip(AMateria* m)
{
	if (m == NULL)
		return ;
	if (_current == 4)
		return ;
	for (int i = 0; i < _current; ++i)
	{
		if (_inventory[i] == m)
			return ;
	}
	_inventory[_current++] = m;
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx >= _current || _inventory[idx] == NULL)
		return ;
	for (int i = idx; i < 3; i++)
	{
		_inventory[i] = _inventory[i + 1];
		_inventory[i + 1] = NULL;
	}
	_current--;
}

void					Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= _current|| _inventory[idx] == NULL)
		return ;
	_inventory[idx]->use(target);
}