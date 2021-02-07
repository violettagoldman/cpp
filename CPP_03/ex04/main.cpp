#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main(void)
{
	srand(time(0));
	FragTrap	ft("FragTrap");
	ScavTrap	st("Serena");
	NinjaTrap	nt("NinjaTrap");
	SuperTrap	sp("SuperTrap");
	
	ft.meleeAttack("Serena");
	ft.rangedAttack("Serena");
	ft.vaulthunterDotExe("Serena");
	st.meleeAttack("FragTrap");
	st.rangedAttack("FragTrap");
	st.challengeNewcomer("FragTrap");
	st.challengeNewcomer("FragTrap");
	st.challengeNewcomer("FragTrap");
	nt.ninjaShoebox(st);
	nt.ninjaShoebox(ft);
	sp.rangedAttack("FragTrap");
	sp.meleeAttack("FrapTrap");
	sp.vaulthunterDotExe("Selena");
	sp.ninjaShoebox(st);
	return (0);
}