#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include <iostream>

class ScavTrap
{
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const &src);
		ScavTrap(std::string name);
		~ScavTrap(void);

		ScavTrap			&operator=(ScavTrap const &src);
		void				rangedAttack(std::string const &target);
		void				meleeAttack(std::string const &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		void				challengeNewcomer(std::string const &target);

	private:
		int					_hitPoints;
		int 				_energyPoints;
		int 				_level;
		int					_meleeAttackDamage;
		int					_rangedAttackDamage;
		int					_armorDamageReduction;
		static const int  	_maxHitPoints = 100;
		static const int 	_maxEnergyPoints = 50;
		std::string _name;
};

#endif
