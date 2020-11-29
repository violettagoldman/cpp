#include "Human.hpp"

Human::Human(void)
{
	std::cout << "Human created\n";
}

Human::~Human(void)
{
	std::cout << "Human destucted\n";
}

const Brain &Human::getBrain(void) const
{
	return (_brain);
}

std::string Human::identify(void) const
{
	return (_brain.identify());
}
