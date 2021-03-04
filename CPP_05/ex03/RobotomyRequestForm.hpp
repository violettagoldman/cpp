#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <stdexcept>
# include <ctime>
# include <cstdlib>

# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		virtual ~RobotomyRequestForm(void);

		RobotomyRequestForm		&operator=(RobotomyRequestForm const &src);
		void					execute(const Bureaucrat &b) const;
		std::string				getTarget(void) const;
		static Form				*constructor(std::string target);

	private:
		std::string	_target;
};

#endif