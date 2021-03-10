#include "whatever.hpp"
#include "Awesome.hpp"

int		main(void)
{
	int		a = 4;
	int		b = 2;
	Awesome	aa(4);
	Awesome	ab(2);
	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "Swap\n";
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min = " << ::min(a, b) << std::endl;
	std::cout << "max = " << ::max(a, b) << std::endl;

	std::cout << "Awesome class\n";
	std::cout << "aa = " << aa.getN() << ", b = " << ab.getN() << std::endl;
	::swap(aa, ab);
	std::cout << "Swap\n";
	std::cout << "aa = " << aa.getN() << ", b = " << ab.getN() << std::endl;
	std::cout << "min = " << ::min(aa, ab).getN() << std::endl;
	std::cout << "max = " << ::max(aa, ab).getN() << std::endl;

	std::cout << "String\n";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "Swap\n";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min = " << ::min(c,d) << std::endl;
	std::cout << "max = " << ::max(c,d) << std::endl;
	return (0);
}