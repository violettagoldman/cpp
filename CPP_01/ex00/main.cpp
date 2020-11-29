#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*pony;

	std::cout << "Creating pony on the heap\n";
	pony = new Pony("Stella", "yellow");
	pony->sing();
	delete pony;
}

void	ponyOnTheStack(void)
{
	std::cout << "Creating pony on the stack\n";
	Pony pony("Lagoona", "blue");
	pony.sing();
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}

