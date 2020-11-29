#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

class	ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		Zombie	*newZombie(std::string name);
		void	setZombieType(std::string type);
		Zombie	*randomChump(void);

	private:
		std::string _type;
};

#endif
