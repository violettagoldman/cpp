#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP

# include <iostream>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(void);
		SuperTrap(SuperTrap const &src);
		SuperTrap(std::string name);
		~SuperTrap(void);

		SuperTrap			&operator=(SuperTrap const &src);
		void				rangedAttack(std::string const &target);
		void				meleeAttack(std::string const &target);
};

#endif