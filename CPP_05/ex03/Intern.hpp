#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);

		Intern	&operator=(Intern const &src);
		Form	*makeForm(std::string name, std::string target);


		class 		FormNotFoundException : public std::exception
		{
			public:
				FormNotFoundException(void);
				const char *what() const throw();
		};

	private:
		std::string	_forms[3];
		Form		*(*_constructors[3])(std::string target);
};

#endif