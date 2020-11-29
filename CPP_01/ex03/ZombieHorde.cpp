#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : N(N)
{
	int		i;

	i = 0;
	this->_zombies = new Zombie[N];
	std::string names[] = {
		"Flocker",
		"Plunger",
		"Chubber",
		"Porcupine",
		"Prober",
		"Browser",
		"Shambler",
		"Gagger",
		"Tumbler",
		"Mumbler",
	};
	while (i < N)
	{
		_zombies[i].setType("Random");
		_zombies[i].setName(names[rand() % 10]);
		++i;
	}
	std::cout << "ZombieHorde created\n";
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_zombies;
	std::cout << "ZombieHorde destructed\n";
}

void		ZombieHorde::announce(void) const
{
	int		i;

	i = 0;
	while (i < this->N)
	{
		this->_zombies[i].advert();
		i++;
	}
}
