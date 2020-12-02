#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	_fpv = 0;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called\n";
	*this = src;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called\n";
	_fpv = i << _nbFrBits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called\n";
	_fpv = roundf(f * (1 << _nbFrBits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed		&Fixed::operator=(Fixed const &src)
{
	std::cout << "Assignation operator called\n";
	if (this != &src)
		this->setRawBits(src.getRawBits());
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fix)
{
	o << fix.toFloat();
	return (o);
}

int		Fixed::getRawBits(void) const
{
	return (this->_fpv);
}

void		Fixed::setRawBits(int const raw)
{
	this->_fpv = raw;
}

float		Fixed::toFloat(void) const
{
	return ((float)(_fpv) / (1 << _nbFrBits));
}

int			Fixed::toInt(void) const
{
	return (_fpv >> _nbFrBits);
}
