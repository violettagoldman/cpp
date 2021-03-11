#include "easyfind.hpp"
#include <vector>

int		main(void)
{
	std::vector<int>	v;

	std::cout << "Let's populate the vector with values from 0 to 4\n";
	for (int i = 0; i < 5; ++i)
		v.push_back(i);
	try
	{
		std::cout << "Let's try to find 0\n";
		std::cout << easyfind(v, 0) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "0 not found\n\n";
	}
	try
	{
		std::cout << "Let's try to find 100\n";
		std::cout << easyfind(v, 100) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "100 not found\n";
	}
	try
	{
		std::cout << "Let's try to find -100\n";
		std::cout << easyfind(v, -100) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "-100 not found\n";
	}
	return (0);
}