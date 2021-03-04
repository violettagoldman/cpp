#include "Form.hpp"

Form::Form(void) : _name("Form"), _isSigned(false), _execGrade(0), _signGrade(0)
{
}

Form::Form(std::string name, int execGrade, int signGrade) : _name(name), _execGrade(execGrade), _signGrade(signGrade)
{
	_isSigned = false;
	if (execGrade > 150 || signGrade > 150)
		throw GradeTooHighException();
	else if (execGrade < 0 || signGrade < 0)
		throw GradeTooLowException();
}

Form::Form(Form const &src) : _name(src._name), _isSigned(src._isSigned), _execGrade(src._execGrade), _signGrade(src._signGrade)
{
	this->_isSigned = src._isSigned;
	*this = src;
}

Form::~Form(void)
{
}

Form		&Form::operator=(Form const &src)
{
	if (this != &src)
	{
		this->_isSigned = src._isSigned;
	}
	return (*this);
}

void			Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > getSignGrade())
		throw GradeTooLowException();
	std::cout << b.getName() << " signs " << getName() << std::endl;
	_isSigned = true;
}

std::ostream	&operator<<(std::ostream &out, const Form &f)
{
    out << f.getName() << ": form, signing grade " << f.getSignGrade() << ", execution grade " << f.getExecGrade();
    return (out);
}

std::string		Form::getName(void) const
{
	return (_name);
}

int				Form::getExecGrade(void) const
{
	return (_execGrade);
}

int				Form::getSignGrade(void) const
{
	return (_signGrade);
}

bool			Form::getSign(void) const
{
	return (_isSigned);
}

Form::GradeTooHighException::GradeTooHighException()
{}

Form::GradeTooLowException::GradeTooLowException()
{}

const char*		Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char*		Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}