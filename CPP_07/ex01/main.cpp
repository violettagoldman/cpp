#include "iter.hpp"
#include "Awesome.hpp"

void	fInt(int &n)
{
  n *= 2;
}

void	fStr(std::string &s)
{
  std::cout << s.size() << "\t";
}

int		main(void)
{
	int			arrInt[] = {-2, -1, 0, 1, 2};
	std::string	arrStr[] = {"One", "Two", "Three", "Four", "Five"};
	int			tab[] = {0, 1, 2, 3, 4};
	Awesome		tab2[5];

	std::cout << "Init array of int: ";
	::print(arrInt, 5);
	std::cout << "Init array of str: ";
	::print(arrStr, 5);
	std::cout << "Mulitply it by 2: ";
	iter(arrInt, 5, &fInt);
	::print(arrInt, 5);
	std::cout << "Size of str array: ";
	iter(arrStr, 5, &fStr);
	std::cout << std::endl;

	std::cout << "Test Awesome class:\n";
	iter(tab, 5, printOne);
	iter(tab2, 5, printOne);
	return (0);
}