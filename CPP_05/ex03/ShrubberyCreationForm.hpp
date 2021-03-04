#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <stdexcept>

# include "Bureaucrat.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		virtual ~ShrubberyCreationForm(void);

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &src);
		void					execute(const Bureaucrat &b) const;
		std::string				getTarget(void) const;
		static Form				*constructor(std::string target);

		class 		FileWritingException : public std::exception
		{
			public:
				FileWritingException(void);
				const char *what() const throw();
		};

	private:
		std::string	_target;
};

#endif