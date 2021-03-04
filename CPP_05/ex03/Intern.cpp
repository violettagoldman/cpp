#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	_constructors[0] = ShrubberyCreationForm::constructor;
	_constructors[1] = RobotomyRequestForm::constructor;
	_constructors[2] = PresidentialPardonForm::constructor;
	_forms[0] = "Robotomy Request";
	_forms[1] = "Shrubbery Creation";
	_forms[2] = "Presidential Pardon";
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern(void)
{
}

Intern		&Intern::operator=(Intern const &src)
{
	(void)src;
	return (*this);
}

Intern::FormNotFoundException::FormNotFoundException()
{}

const char*	Intern::FormNotFoundException::what() const throw()
{
	return "form is not found";
}

Form		*Intern::makeForm(std::string formName, std::string target)
{
	for (unsigned int i = 0; i < 3; i++)
	{
		if (_forms[i] == formName)
			return ((this->_constructors[i])(target));
	}
	throw FormNotFoundException();
	return (NULL);
}

