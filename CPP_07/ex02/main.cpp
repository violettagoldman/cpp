#include "Array.hpp"
#include "Awesome.hpp"

int		main(void)
{
	Array<int>			*arrInt;
	Array<std::string>	*arrStr;
	Array<Awesome>		*arrAwe;

	arrInt = new Array<int>(5);
	std::cout << "Int array of size " << arrInt->size() << std::endl;
	(*arrInt)[0] = 1;
	(*arrInt)[4] = 5;
	for (unsigned int i = 0; i < arrInt->size(); ++i)
		std::cout << (*arrInt)[i] << "\t";
	std::cout << std::endl;
	std::cout << "Trying to access arr[5]\n";
	try
	{
		std::cout << (*arrInt)[5] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Can't access arr[5]\n";
	}

	arrStr = new Array<std::string>();
	std::cout << "Str array of size " << arrStr->size() << std::endl;
	for (unsigned int i = 0; i < arrStr->size(); ++i)
		std::cout << (*arrStr)[i] << std::endl;
	std::cout << "Trying to access arr[-1]\n";
	try
	{
		std::cout << (*arrStr)[-1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Can't access arr[-1]\n";
	}

	arrAwe = new Array<Awesome>(2);
	std::cout << "Awesome array of size " << arrAwe->size() << std::endl;
	for (unsigned int i = 0; i < arrAwe->size(); ++i)
		std::cout << (*arrAwe)[i].get() << "\t";
	std::cout << std::endl;
	std::cout << "Trying to access arr[6]\n";
	try
	{
		std::cout << (*arrAwe)[6] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Can't access arr[6]\n";
	}
	delete arrInt;
	delete arrStr;
	delete arrAwe;
}
