#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat heinz("Heinz", 16);

	std::cout << heinz << std::endl;
	std::cout << "Test too high\n";
	try
	{
		heinz.setGrade(1500);
	}
	catch(std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << "Test too low\n";
	try
	{
		heinz.setGrade(-1500);
	}
	catch(std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	heinz.setGrade(150);
	std::cout << "Test too high increment\n";
	try
	{
		heinz.incrementGrade();
	}
	catch(std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	heinz.setGrade(0);
	std::cout << "Test too low decrement\n";
	try
	{
		heinz.decrementGrade();
	}
	catch(std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}