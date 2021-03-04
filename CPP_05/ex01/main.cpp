#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat	heinz("Heinz", 4);
	Form		form("Guest Form", 5, 10);

	std::cout << heinz << std::endl << form << std::endl;
	std::cout << "Can Heniz sign the Guest Form? - YES\n";
	heinz.signForm(form);
	std::cout << "And if we set his grade to 150? - NO\n";
	heinz.setGrade(150);
	heinz.signForm(form);
	return (0);
}