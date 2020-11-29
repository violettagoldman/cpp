#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) : _type("Random")
{
	std::cout << "ZombieEvent created\n";
}
ZombieEvent::~ZombieEvent(void)
{
	std::cout << "ZombieEvent destroyed\n";
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->_type));
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::randomChump(void)
{
	Zombie	*zombie;
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
	zombie = newZombie(names[rand() % 10]);
	zombie->advert();
	return (zombie);
}


