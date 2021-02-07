#include "FragTrap.hpp"

int		main(void)
{
	srand(time(0));
	FragTrap ft("FragTrap");
	FragTrap cp("ClapTrap");
	FragTrap ftBro = ft;
	FragTrap cpBro(cp);

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
	ft.meleeAttack("ClapTrap");
	ftBro.vaulthunterDotExe("ClapTrap");
	ftBro.vaulthunterDotExe("ClapTrap");
	ftBro.vaulthunterDotExe("ClapTrap");
	cpBro.takeDamage(20);
	cpBro.beRepaired(20);
	return (0);
}