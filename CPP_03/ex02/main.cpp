#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	srand(time(0));
	FragTrap ft("FragTrap");
	ScavTrap st("ScavTrap");
	
	st.challengeNewcomer("FragTrap");
	ft.vaulthunterDotExe("ScavTrap");
	ft.meleeAttack("ScavTrap");
	ft.rangedAttack("ScavTrap");
	ft.rangedAttack("ScavTrap");
	ft.vaulthunterDotExe("ScavTrap");
	ft.takeDamage(30);
	st.meleeAttack("FragTrap");
	st.rangedAttack("FragTrap");
	st.rangedAttack("FragTrap");
	st.takeDamage(30);
	return (0);
}