#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#include <stdlib.h>

int		main(void)
{
	Intern		someRandomIntern;
	Bureaucrat	bim("Bim", 1);
	Form		*form;

	try
	{
		form = someRandomIntern.makeForm("Robotomy Request", bim.getName());
		bim.signForm(*form);
		bim.executeForm(*form);
	}
	catch(std::exception& e)
	{
		std::cout << bim.getName() << " can't make " << form->getName() << " because " << e.what() << std::endl;
	}
	try
	{
		form = someRandomIntern.makeForm("Shrubbery Creation", "Bim");
		bim.signForm(*form);
		bim.executeForm(*form);
	}
	catch(std::exception& e)
	{
		std::cout << bim.getName() << " can't make " << form->getName() << " because " << e.what() << std::endl;
	}
	try
	{
		form = someRandomIntern.makeForm("Presidential Pardon", "Bill");
		bim.signForm(*form);
		bim.executeForm(*form);
	}
	catch(std::exception& e)
	{
		std::cout << bim.getName() << " can't make " << form->getName() << " because " << e.what() << std::endl;
	}
	delete form;
	return (0);
}