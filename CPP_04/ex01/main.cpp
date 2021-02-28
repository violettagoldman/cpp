#include "Enemy.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

int	main(void)
{
	Character* me = new Character("me");
	Character* he = new Character("he");
	std::cout << *me;
	std::cout << *he;
	Enemy* b = new RadScorpion();
	Enemy* p = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	he->recoverAP();
	he->attack(b);
	he->equip(pr);
	std::cout << *he;
	he->equip(pf);
	he->attack(p);
	he->attack(p);
	me->attack(p);
	me->attack(p);
	std::cout << *he;
	delete me;
	delete he;
	delete pr;
	delete pf;
	delete p;
	return (0);
}