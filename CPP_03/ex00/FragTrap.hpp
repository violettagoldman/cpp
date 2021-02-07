#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <iostream>

class FragTrap
{
	public:
		FragTrap(void);
		FragTrap(FragTrap const &src);
		FragTrap(std::string name);
		~FragTrap(void);

		FragTrap			&operator=(FragTrap const &src);
		void				rangedAttack(std::string const &target);
		void				meleeAttack(std::string const &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		void				vaulthunterDotExe(std::string const &target);

	private:
		int					_hitPoints;
		int 				_energyPoints;
		int 				_level;
		int					_meleeAttackDamage;
		int					_rangedAttackDamage;
		int					_armorDamageReduction;
		static const int  	_maxHitPoints = 100;
		static const int 	_maxEnergyPoints = 100;
		std::string			_name;
};

#endif
