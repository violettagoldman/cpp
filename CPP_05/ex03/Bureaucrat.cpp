#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Bureaucrat")
{
	setGrade(0);
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat		&Bureaucrat::operator=(Bureaucrat const &src)
{
	if (this != &src)
	{
		this->_grade = src._grade;
	}
	return (*this);
}

void			Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw GradeTooHighException();
	else if (grade < 0)
		throw GradeTooLowException();
	else
		_grade = grade;
}

void			Bureaucrat::incrementGrade(void)
{
	setGrade(getGrade() + 1);
}

void			Bureaucrat::decrementGrade(void)
{
	setGrade(getGrade() - 1);
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{}

const char*		Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char*		Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &target)
{
    out << target.getName() << ", bureaucrat, grade " << target.getGrade();
    return (out);
}

std::string		Bureaucrat::getName(void) const
{
	return (_name);
}

int				Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void			Bureaucrat::signForm(Form &form)
{
	try
    {
        form.beSigned(*this);
    }
    catch (std::exception& e)
    {
       std::cout << _name << " can't sign " << form.getName() << " because " << e.what() << std::endl;
    }
    return ;
}

void			Bureaucrat::executeForm(Form &form)
{
	try
	{
		form.execute(*this);
	}
	catch(std::exception &e)
	{
		std::cout << _name << " can't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}