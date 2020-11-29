#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <stdlib.h>

class ZombieHorde
{
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);

		void	announce(void) const;

	private:
		int		N;
		Zombie	*_zombies;
};

#endif
