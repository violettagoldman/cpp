#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	srand(time(0));
	FragTrap 	ft("FragTrap");
	FragTrap 	cp("ClapTrap");
	FragTrap 	ftBro = ft;
	FragTrap 	cpBro(cp);
	ScavTrap 	serena("Serena");
	NinjaTrap 	ninja("Void");
	
	ninja.ninjaShoebox(serena);
	ninja.ninjaShoebox(ft);
	serena.challengeNewcomer("FragTrap");
	ft.meleeAttack("ClapTrap");
	ft.rangedAttack("ClapTrap");
	cp.vaulthunterDotExe("FragTrap");
	cp.vaulthunterDotExe("FragTrap");
	cp.vaulthunterDotExe("FragTrap");
	cp.vaulthunterDotExe("FragTrap");
	cp.vaulthunterDotExe("FragTrap");
	ft.rangedAttack("ClapTrap");
	ft.vaulthunterDotExe("ClapTrap");
	ft.takeDamage(30);
	ft.meleeAttack("John");
	cpBro.takeDamage(20);
	cpBro.beRepaired(20);
	return (0);
}