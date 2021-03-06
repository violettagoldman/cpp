#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>
# include <stdlib.h>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const &src);
		ScavTrap(std::string name);
		virtual ~ScavTrap(void);

		ScavTrap			&operator=(ScavTrap const &src);
		void				rangedAttack(std::string const &target);
		void				meleeAttack(std::string const &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		void				challengeNewcomer(std::string const &target);
};

#endif
