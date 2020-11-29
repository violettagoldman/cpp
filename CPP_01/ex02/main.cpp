#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent	ze;
	Zombie		*tmp;
	Zombie		*heapZombie;
	Zombie		stackZombie("Michael", "Stack");

	std::cout << "Creating random zombie on the heap\n";
	tmp = ze.randomChump();
	delete tmp;

	std::cout << "Creating a zombie on the stack\n";
	heapZombie = new Zombie("Greg", "Heap");
	heapZombie->advert();
	delete heapZombie;

	std::cout << "Creating a zombie on the heap\n";
	stackZombie.advert();
	return (0);
}
