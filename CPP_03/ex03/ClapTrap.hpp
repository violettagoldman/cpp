#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>
# include <stdlib.h>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const &src);
		ClapTrap(std::string name);
		virtual ~ClapTrap(void);

		ClapTrap			&operator=(ClapTrap const &src);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		std::string			getName(void);

	protected:
		int					_hitPoints;
		int 				_energyPoints;
		int 				_level;
		int					_meleeAttackDamage;
		int					_rangedAttackDamage;
		int					_armorDamageReduction;
		int					_maxHitPoints;
		int					_maxEnergyPoints;
		std::string 		_name;
};

#endif
