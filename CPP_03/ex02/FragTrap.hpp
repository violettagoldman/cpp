#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>
# include <stdlib.h>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(FragTrap const &src);
		FragTrap(std::string name);
		virtual ~FragTrap(void);

		FragTrap			&operator=(FragTrap const &src);
		void				rangedAttack(std::string const &target);
		void				meleeAttack(std::string const &target);
		void				vaulthunterDotExe(std::string const &target);
};

#endif
