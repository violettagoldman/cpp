#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
	public:
		Form(void);
		Form(std::string name, int execGrade, int signGrade);
		Form(Form const &src);
		virtual ~Form(void);

		Form			&operator=(Form const &src);
		std::string		getName(void) const;
		int				getExecGrade(void) const;
		int				getSignGrade(void) const;
		bool			getSign(void) const;
		void			beSigned(Bureaucrat &b);
		virtual void	execute(const Bureaucrat &exec) const = 0;

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

		class 					NotSignedException : public std::exception
		{
			public:
				NotSignedException(void);
				const char *what() const throw();
		};

	private:
		std::string const	_name;
		bool				_isSigned;
		const int			_execGrade;
		const int			_signGrade;

};

std::ostream	&operator<<(std::ostream &out, const Form &f);

#endif