#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	srand(time(0));
	FragTrap ft("FragTrap");
	ScavTrap serena("Serena");
	
	ft.meleeAttack("Serena");
	ft.rangedAttack("Serena");
	ft.vaulthunterDotExe("Serena");
	serena.meleeAttack("FragTrap");
	serena.rangedAttack("FragTrap");
	serena.challengeNewcomer("FragTrap");
	serena.challengeNewcomer("FragTrap");
	serena.challengeNewcomer("FragTrap");
	serena.takeDamage(30);
	serena.meleeAttack("FragTrap");
	serena.takeDamage(20);
	serena.beRepaired(20);
	return (0);
}