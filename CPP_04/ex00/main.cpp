#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Rose.hpp"

int main(void)
{
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon			joe("Joe");
	Rose			ela("Ela");

	std::cout << robert << jim << joe << ela;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(ela);
	return 0;
}