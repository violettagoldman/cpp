#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Form;
# include "Form.hpp"

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &src);
		virtual ~Bureaucrat(void);

		Bureaucrat	&operator=(Bureaucrat const &src);
		void		setGrade(int grade);
		void		incrementGrade(void);
		void		decrementGrade(void);
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		signForm(Form &form);
		void		executeForm(Form &form);

		class 		GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				const char *what() const throw();
		};

		class 		GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				const char *what() const throw();
		};

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &b);

#endif