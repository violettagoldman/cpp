#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include <iostream>
# include <stdlib.h>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(NinjaTrap const &src);
		NinjaTrap(std::string name);
		~NinjaTrap(void);

		NinjaTrap			&operator=(NinjaTrap const &src);
		void				rangedAttack(std::string const &target);
		void				meleeAttack(std::string const &target);
		void				ninjaShoebox(NinjaTrap &target);
		void				ninjaShoebox(FragTrap &target);
		void				ninjaShoebox(ScavTrap &target);
		void				ninjaShoebox(ClapTrap &target);
};

#endif
