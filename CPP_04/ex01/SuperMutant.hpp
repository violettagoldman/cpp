#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const &src);
		virtual	~SuperMutant(void);
		void		takeDamage(int damage);

		SuperMutant			&operator=(SuperMutant const &src);
};

#endif