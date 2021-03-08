#include "Base.hpp"

int		main(void)
{
	Base	*a = new A();
	Base	*b = new B();
	Base	*c = new C();

	identify_from_pointer(a);
	identify_from_pointer(b);
	identify_from_pointer(c);

	identify_from_reference(*a);
	identify_from_reference(*b);
	identify_from_reference(*c);

	delete a;
	delete b;
	delete c;
	return (0);
}