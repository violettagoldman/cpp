#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain created\n";
}

Brain::~Brain(void)
{
	std::cout << "Brain destucted\n";
}

std::string Brain::identify(void) const
{
	const void	*address = static_cast<const void*>(this);
	std::stringstream ss;
	ss << address;
	return (ss.str());
}
