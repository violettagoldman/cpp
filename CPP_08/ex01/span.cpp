#include "span.hpp"

Span::Span(void) : _maxSize(2147483647)
{
}

Span::Span(unsigned int n) : _maxSize(n)
{
	_v.reserve(n);
}

Span::Span(Span const &src)
{
	*this = src;
}

Span::~Span(void)
{
}

Span	&Span::operator=(Span const &src)
{
	if (this != &src)
	{
		this->_v.reserve(this->_maxSize);
		this->_maxSize = src._maxSize;
	}
	return (*this);
}


void	Span::addNumber(int n)
{
	if (inSpan(n))
		throw std::exception();
	if (_v.size() >= _maxSize)
		throw std::exception();
	_v.push_back(n);
}

int		Span::shortestSpan(void)
{
	int							min;
	int							tmp;
	std::vector<int>::iterator	it1;
	std::vector<int>::iterator	it2;

	if (_v.size() <= 1)
		throw std::exception();
	min = 2147483647;
	it1 = _v.begin();
	while (it1 != _v.end())
	{
		it2 = _v.begin();
		while (it2 != _v.end())
		{
			if (it1 != it2)
			{
				tmp = abs(*it1 - *it2);
				if (tmp < min)
					min = tmp;
			}
			++it2;
		}
		++it1;
	}
	return (min);
}

int		Span::longestSpan(void)
{
	int							max;
	int							tmp;
	std::vector<int>::iterator	it1;
	std::vector<int>::iterator	it2;

	if (_v.size() <= 1)
		throw std::exception();
	max = 0;
	it1 = _v.begin();
	while (it1 != _v.end())
	{
		it2 = _v.begin();
		while (it2 != _v.end())
		{
			if (it1 != it2)
			{
				tmp = abs(*it1 - *it2);
				if (tmp > max)
					max = tmp;
			}
			++it2;
		}
		++it1;
	}
	return (max);
}

bool	Span::inSpan(int n)
{
	return (std::find(_v.begin(), _v.end(), n) != _v.end());
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		addNumber(*begin);
		++begin;
	}
}