#include "Squad.hpp"

Squad::Squad(void)
{
	this->_units = new ISpaceMarine*[0];
	this->_current = 0;
}

Squad::Squad(Squad const &src)
{
	this->_current = 0;
	*this = src;
}

Squad::~Squad(void)
{
	int i;

	i = 0;
	while (i < this->_current)
	{
		delete this->_units[i];
		++i;
	}
	delete []this->_units;
	this->_units = NULL;
}

Squad					&Squad::operator=(Squad const &src)
{
	int i;

	i = 0;
	if (this != &src)
	{
		while (i < _current)
		{
			delete _units[i];
			++i;
		}
		delete []this->_units;
		this->_units = NULL;
		this->_current = 0;
		i = 0;
		while (i < src.getCount())
		{
			this->push(src.getUnit(i)->clone());
			++i;
		}
	}
	return (*this);
}

int						Squad::getCount() const
{
	return (_current);
}

ISpaceMarine*	Squad::getUnit(int unit) const
{
	return (unit < _current ? _units[unit] : 0);
}

int						Squad::push(ISpaceMarine* unit)
{
	int 					i;
	ISpaceMarine	**tmp;

	i = 0;
	if (unit == NULL)
		return (0);
	while (i < _current)
	{
		if (_units[i] == unit)
			return (0);
		++i;
	}
	tmp = new ISpaceMarine*[_current + 1];
	i = 0;
	while (i < _current)
	{
		tmp[i] = _units[i];
		++i;
	}
	tmp[_current++] = unit;
	if (_units != NULL)
		delete [] _units;
	_units = tmp;
	return (_current);
}