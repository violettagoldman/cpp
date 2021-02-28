#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	_current = 0;
	for (int i = 0; i < 4; ++i)
		_src[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for (int i = 0; i < src._current; ++i)
		learnMateria(src._src[i]->clone());
	for (int i = _current; i < 4; ++i)
		_src[i] = 0;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < _current; i++)
	{
		if (_src[i] != 0)
			delete _src[i];
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &src)
{
	if (this != &src)
	{
		for (int i = 0; i < _current; ++i)
			delete _src[i];
		_current = 0;
		for (int i = 0; i < src._current; ++i)
			learnMateria(src._src[i]->clone());
		for (int i = _current; i < 4; ++i)
			_src[i] = 0;
	}
	return (*this);
}

void					MateriaSource::learnMateria(AMateria *m)
{
	if (_current  == 4 || m == NULL)
		return ;
	for (int i = 0; i < _current; ++i)
	{
		if (_src[i] == m)
			return ;
	}
	_src[_current++] = m;
}

AMateria* 		MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < _current; ++i)
	{
		if (_src[i]->getType() == type)
			return (_src[i]->clone());
	}
	return (0);
}