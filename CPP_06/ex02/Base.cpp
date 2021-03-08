#include "Base.hpp"

Base::Base(void)
{}

Base::Base(Base const &src)
{
	*this = src;
}

Base::~Base(void)
{}

Base		&Base::operator=(Base const &src)
{
	(void)src;
	return (*this);
}

A::A(void)
{}

A::A(A const &src)
{
	*this = src;
}

A::~A(void)
{}

A		&A::operator=(A const &src)
{
	(void)src;
	return (*this);
}

B::B(void)
{}

B::B(B const &src)
{
	*this = src;
}

B::~B(void)
{}

B		&B::operator=(B const &src)
{
	(void)src;
	return (*this);
}

C::C(void)
{}

C::C(C const &src)
{
	*this = src;
}

C::~C(void)
{}

C		&C::operator=(C const &src)
{
	(void)src;
	return (*this);
}

Base	*generate(void)
{
	int	random;

	random = std::rand() % 3;
	switch (random)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			return (new A());
	}
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A\n";
	if (dynamic_cast<B *>(p))
		std::cout << "B\n";
	if (dynamic_cast<C *>(p))
		std::cout << "C\n";
}

void	identify_from_reference(Base &p)
{
	Base	base;
	std::cout << "_______________________\n";
	try
	{
		base = dynamic_cast<A&>(p);
		std::cout << "It's A\n";
	}
	catch (std::exception& e)
	{
		std::cout << "It's not A\n";
	}
	try
	{
		base = dynamic_cast<B&>(p);
		std::cout << "It's B\n";
	}
	catch (std::exception& e)
	{
		std::cout << "It's not B\n";
	}
	try
	{
		base = dynamic_cast<C&>(p);
		std::cout << "It's C\n";
	}
	catch (std::exception& e)
	{
		std::cout << "It's not C\n";
	}
}