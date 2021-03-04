#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 5, 25)
{
	_target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("PresidentialPardonForm", 5, 25), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src.getName(), src.getExecGrade(), src.getSignGrade())
{
	this->_target = src.getTarget();
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm		&PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	if (this != &src)
	{
		this->_target = src.getTarget();
	}
	return (*this);
}

std::string		PresidentialPardonForm::getTarget(void) const
{
	return (_target);
}

void	PresidentialPardonForm::execute(const Bureaucrat &b) const
{
	Form::execute(b);
	std::cout << b.getName() << " has been pardoned by Zafod Beeblebrox\n";
}

Form	*PresidentialPardonForm::constructor(std::string target)
{
	return (new PresidentialPardonForm(target));
}