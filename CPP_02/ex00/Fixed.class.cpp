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

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed	&Fixed::operator=(Fixed const &src)
{
	std::cout << "Assignation operator called\n";
	if (this != &src)
		this->setRawBits(src.getRawBits());
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_fpv);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fpv = raw;
}
