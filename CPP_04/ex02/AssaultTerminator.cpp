#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src)
{
	std::cout << "* teleports from space *\n";
	*this = src;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back...\n";
}

AssaultTerminator		&AssaultTerminator::operator=(AssaultTerminator const &src)
{
	(void)src;
	return (*this);
}

AssaultTerminator*		AssaultTerminator::clone() const
{
	return (new AssaultTerminator(*this));
}

void							AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!\n";
}

void							AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
}

void							AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *\n";
}