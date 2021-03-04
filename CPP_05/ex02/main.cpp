#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <stdlib.h>

int		main(void)
{
	Bureaucrat				heinz("Heinz", 150);
	Bureaucrat				brayan("Brayan", 1);
	ShrubberyCreationForm	sc("tree");
	RobotomyRequestForm		rr("xxx");
	PresidentialPardonForm	pp("secret");

	srand(time(NULL));
	std::cout << heinz << std::endl << sc << std::endl;
	std::cout << "Can Heniz execute this tree form? - No\n";
	heinz.executeForm(sc);
	std::cout << "And now if we increment his grade by 50? - Still no\n";
	heinz.setGrade(100);
	heinz.executeForm(sc);
	std::cout << "But what if he signs it? - YES\n";
	heinz.signForm(sc);
	heinz.executeForm(sc);
	std::cout << "And here is... Brayan!" << std::endl << brayan << std::endl;
	std::cout << rr << std::endl;
	brayan.signForm(rr);
	std::cout << "Can Brayan execute RobotomyRequestForm? - yes, but only if he is lucky\n";
	brayan.executeForm(rr);
	std::cout << "Can Brayan execute PresedentialPardonForm? - No, he hasn't signed it yet\n";
	brayan.signForm(pp);
	std::cout << "And now? - Yep\n";
	brayan.executeForm(pp);
	return (0);
}