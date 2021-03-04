#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 45, 72)
{
	_target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("RobotomyRequestForm", 45, 72), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src.getName(), src.getExecGrade(), src.getSignGrade())
{
	this->_target = src.getTarget();
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm		&RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	if (this != &src)
	{
		this->_target = src.getTarget();
	}
	return (*this);
}

std::string		RobotomyRequestForm::getTarget(void) const
{
	return (_target);
}

void	RobotomyRequestForm::execute(const Bureaucrat &b) const
{
	Form::execute(b);
	if (rand() & 1)
	{
		std::cout << "DRILL DRZHZHHZHZHZHHDRZZZHHZHZDRRRRRR\n";
		std::cout << getTarget() << " has been robotomized successfully!\n";
	}
	else
		std::cout << getTarget() << " robotomization failed!\n";
}

Form	*RobotomyRequestForm::constructor(std::string target)
{
	return (new RobotomyRequestForm(target));
}